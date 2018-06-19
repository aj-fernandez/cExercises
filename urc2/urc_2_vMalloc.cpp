/*Construye el código C, en modo recursivo, de un programa donde a partir de un número
solicitado al usuario, muestre la serie de números de Fibonacci hasta el término indicado por el
número recibido.*/

#include <stdio.h>
#include <stdlib.h> // para usar malloc()

int main()
{
	int cont;
	int fiboCalc(int end);
	int lenght;
	int *array;
	int i;
	int j;
	printf("Indique la posicion final a mostrar: ");
	scanf("%i",&lenght);
	array=(int *)malloc(sizeof(int)*lenght); //malloc devuelve un puntero a un dato sin tipo determinado (void *), por eso hago un casting (int *), otra
											//manera de hacerlo sería con (int *)malloc(lenght*sizeof(int)).
											//La complicacion de la función malloc es que debemos conocer cuentos bytes queremos reservar, en este caso, usando
											//sizeof(int) multiplicado por el valor de lenght reservará los bytes correspondienes a N(lenght) posiciones del array.
											//basicamente quiere decir: reservame el número de bytes para X(lenght en mi caso) numero de enteros.
	if (array == '\0')	
	{
    	printf("Memoria asignada al array no válida. ERROR AGUSTIN ERROR!!\n");
	}else{
		printf("Memoria asignada correctamente.\n");
		fflush(stdin);
		for (i=0;i<lenght;i++)
		{
			array[i]=i;
			printf("%i ",array[i]);
		}
		free(array);// MUY MUY importante, liberar la memoria reservada de array en el heap ucuando termine la función. next step: control de errores sobre malloc().
				//como norma general si el programa entra en loop infinito suele ser por que hemos asignado mal sizeof y desborda el heap.
		printf("\n");
		fiboCalc(lenght);
	}
}
int fiboCalc(int end)
{
	int i = 0;
	static int a=0,b=1;
	int copy;
	if (i<end)
	{
		copy=a;
		printf("%i ",a+b);
		a=b+a;
		b=copy;
		return end=fiboCalc(end-1);
	}else{
		return 1;
	}
	
}
