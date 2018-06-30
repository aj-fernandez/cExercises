/*Construye el c�digo en lenguaje C de un programa que pidiendo un n�mero por teclado, sirva
para simular el lanzamiento de tantos dados al azar como el n�mero introducido. La funci�n
generar� un n�mero aleatorio al estilo de un dado, que devolver� a la funci�n invocadora, que
los ir� mostrando en pantalla seg�n le lleguen.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	void genRand(int cant);
	srand((unsigned)time(NULL)); //El scope de la semilla de srand() es global, aunque use rand() en otra funcion tomar� esta semilla para generar los n�meros.
	int cant;

	printf("Introduzca la cantidad de numeros random que desea recibir: ");
	scanf("%i",&cant);
	fflush(stdin);

	genRand(cant);
	return 0;
}
void random(int numRand)
{
	printf("Numero random: %i\n",numRand);
}
void genRand(int cant)
{
	void random(int numRand);
	int numRand,cont;
	for (cont=0;cont<cant;cont++)
	{
		numRand = rand() % 6+1; // rand() % 6 da el rango 0 a 1 pero necesitamos el rango de un dado, +1.
		random(numRand);
	}
}
