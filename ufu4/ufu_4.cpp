/*Construye el código en lenguaje C de un programa que rellene dos tablas unidimensionales de
20 posiciones numéricas. Una vez hecho esto, pasarlas a una función junto con una tercera tabla
con las mismas posiciones pero vacía. La función debe encargarse de generar en la tabla vacía la
suma de las posiciones homólogas de las dos que se le pasaron.*/

#include <stdio.h>

int main()
{
	int arrayOne[5];
	int arrayTwo[5];
	int arrayEmp[5];
	int cont;
	void sumArray (int op1[5], int op2[5], int result[5]);
			
	printf("Rellena el arrayOne\n");
	for (cont=0;cont<5;cont++)
	{
		printf("Introduce un numero: ");
		scanf("%i",&arrayOne[cont]);/*Se aprovecha el contador para indicar cual es la posición del array en la que almacenar el número introducido*/
		fflush(stdin);
	}
	printf("\nRellena el arrayTwo\n");
	for (cont=0;cont<5;cont++)
	{
		printf("Introduce un numero: ");
		scanf("%i",&arrayTwo[cont]);/*Se aprovecha el contador para indicar cual es la posición del array en la que almacenar el número introducido*/
		fflush(stdin);
	}
	
	for (cont=0;cont<5;cont++)
	{
	
		printf("Posicion [%i] del arrayOne =  %i\n",cont,arrayOne[cont]);
	}
	for (cont=0;cont<5;cont++)
	{
		printf("Posicion [%i] del arrayTwo =  %i\n",cont,arrayTwo[cont]);
	}
	
	sumArray(arrayOne, arrayTwo, arrayEmp);
	return 0;
}
void sumArray (int op1[], int op2[], int result[])
{
	int cont;
	printf("Comprobamos que los arrays han sido enviados correctamente a la funcion sumArray()\n");
	for (cont=0;cont<5;cont++)
	{
	
		printf("Posicion [%i] del arrayOne [en funcion sumArray]=  %i\n",cont,op1[cont]);
	}
	for (cont=0;cont<5;cont++)
	{
		printf("Posicion [%i] del arrayTwo [en funcion sumArray]=  %i\n",cont,op2[cont]);
	}
	
	/*Después ver que el traspaso de los arrays es correcto comienzo a hacer las operaciones necesarios para rellenar el array result*/
	
	for (cont=0;cont<5;cont++)
	{
	result[cont] = op1[cont] + op2[cont]; 	
	}
	for (cont=0;cont<5;cont++)
	{
		printf("Posicion [%i] del array result=  %i\n",cont,result[cont]);
	}	
}
