/*Versión final cumpliendo el enunciado, MAIN() pasa los números a la función PARSER() y esta es la que cuenta el tipo de números introducidos y muestra 
el resultado total.

Construye el código en lenguaje C de un programa que pida la introducción de 25 números, los
vaya pasando a una función cuya labor será realizar un recuento de números positivos,
negativos y nulos que se introdujeron. Al final, la propia función mostrará los resultados en
pantalla.*/

#include <stdio.h>
int main(int contParser)
{
	int parser(int *stdiMain);
	int stdi;
	if (contParser<5)
	{
	printf("Introduzca un numero entero: ");
	scanf("%i",&stdi);
	fflush(stdin);
	parser(&stdi);
	}else{
		parser(&stdi);
		return 0;
	}
}
int parser(int *stdiMain)
{
	static int cont;
	static int numNeg;
	static int numNul;
	static int numPos;
	if (cont<5)
	{
		if (*stdiMain>0)
		{
			numPos++;
		}else{
			if (*stdiMain<0)
			{
				numNeg++;
				
			}else{
				numNul++;
			}
		}
		cont++;
		main(cont);
	}else
	{
		printf("El usuario introdujo %i numeros negativos, %i postivos y %i nulos \n", numNeg, numPos, numNul);
		return 0;
	}
}
