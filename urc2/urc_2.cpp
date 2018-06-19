/*Construye el c�digo C, en modo recursivo, de un programa donde a partir de un n�mero
 *solicitado al usuario, muestre la serie de n�meros de Fibonacci hasta el t�rmino indicado por el
 *n�mero recibido.
 *
 *Versi�n sencilla
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
