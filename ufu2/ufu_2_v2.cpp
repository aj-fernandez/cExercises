/*Versi�n final cumpliendo el enunciado, MAIN() pasa los n�meros a la funci�n PARSER() y esta es la que cuenta el tipo de n�meros introducidos y muestra 
el resultado total.

Construye el c�digo en lenguaje C de un programa que pida la introducci�n de 25 n�meros, los
vaya pasando a una funci�n cuya labor ser� realizar un recuento de n�meros positivos,
negativos y nulos que se introdujeron. Al final, la propia funci�n mostrar� los resultados en
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
