/*Construye el código en lenguaje C de un programa que pidiendo un número por teclado, sirva
para simular el lanzamiento de tantos dados al azar como el número introducido. La función
generará un número aleatorio al estilo de un dado, que devolverá a la función invocadora, que
los irá mostrando en pantalla según le lleguen.*/

//Versión 2 en la que utilizo solo 2 funciones (3 en la anterior) a camnbio de declarar un variable global.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int numRand;
int main()
{
	int cant,cont;
	void genRand(int cant);
	srand((unsigned)time(NULL)); //El scope de srand() es global, aunque use rand() en otra funcion tomará esta seed para generar los numeros.
	
	printf("Introduzca la cantidad de numeros random que desea recibir: ");	
	scanf("%i",&cant);
	fflush(stdin);
	
	for (cont=0;cont<cant;cont++)
	{
		genRand(cant);
		printf("Numero random: %i\n",numRand);
	}
	return 0;
}
int genRand(int cant)
{
	numRand = rand() % 6+1;
}
