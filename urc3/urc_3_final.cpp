/* Construye el c�digo C, en modo recursivo, de un programa que realice la multiplicaci�n de dos
 *n�meros. (Pista: la multiplicaci�n no es m�s que una serie de sumas sucesivas.)
 *
 */
 
#include <stdio.h>

int main()
{
	int a,b;
	int mult(int op1, int op2);
	printf("Introduzca el primer operando: ");
	scanf("%i",&a);
	fflush(stdin);
	printf("Introduzca el segundo operando: ");
	scanf("%i",&b);
	fflush(stdin);
	mult(a,b);
}
int mult(int op1, int op2)
{
	static int prod;
	
	if (op2!=0)
		{
			prod=prod+op1;
			return mult(op1,op2-1);
		}else{
			printf("El producto es: %i",prod);
			return 1;
		}	
}
