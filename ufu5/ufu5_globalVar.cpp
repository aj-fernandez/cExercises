/*Construye el c�digo en lenguaje C de un programa que pidiendo un n�mero por teclado, sirva
para simular el lanzamiento de tantos dados al azar como el n�mero introducido. La funci�n
generar� un n�mero aleatorio al estilo de un dado, que devolver� a la funci�n invocadora, que
los ir� mostrando en pantalla seg�n le lleguen.*/

//Versi�n 2 en la que utilizo solo 2 funciones (3 en la anterior) a camnbio de declarar un variable global.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int numRand;
int main()
{
	int cant,cont;
	void genRand(int cant);
	srand((unsigned)time(NULL)); //El scope de srand() es global, aunque use rand() en otra funcion tomar� esta seed para generar los numeros.

	printf("Introduzca la cantidad de numeros random que desea recibir: ");
	scanf("%i",&cant);
	fflush(stdin);

	for (cont=0;cont<cant;cont++)
	{
		genRand(cant);
		printf("Numero random: %i\n",numRand);
	}
	getchar();
	return 0;
}
int genRand(int cant)
{
	numRand = rand() % 6+1;
}
