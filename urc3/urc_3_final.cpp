/* Construye el código C, en modo recursivo, de un programa que realice la multiplicación de dos
 *números. (Pista: la multiplicación no es más que una serie de sumas sucesivas.)
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
