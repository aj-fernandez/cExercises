/*Construye el código en lenguaje C de un programa que pidiendo un número por teclado, sirva
para simular el lanzamiento de tantos dados al azar como el número introducido. La función
generará un número aleatorio al estilo de un dado, que devolverá a la función invocadora, que
los irá mostrando en pantalla según le lleguen.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	void genRand(int cant);
	srand((unsigned)time(NULL)); //El scope de la semilla de srand() es global, aunque use rand() en otra funcion tomará esta semilla para generar los números.
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
