/*Construye el código C, en modo recursivo, de un programa donde a partir de un número
 *solicitado al usuario, muestre la serie de números de Fibonacci hasta el término indicado por el
 *número recibido.
 *
 *Versión sencilla
 *
 */

#include <stdio.h>

int main()
{
	int fiboCalc(int end);
	int lenght,i;
	printf("Indica cuantos numeros de la serie Fibonacci desea visualizar: ");
	scanf("%i",&lenght);
	fflush(stdin);
	
	fiboCalc(lenght);
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
