/*Construye el c�digo en lenguaje C de un programa que recibe a trav�s de la l�nea de comandos
un nombre de pila. Una vez hecho esto, aparecer� un men� de tres opciones en pantalla como el
que sigue, de forma que al pulsar el n�mero correspondiente a la opci�n elegida, invoque una
funci�n con el nombre del n�mero introducido (1 -> uno) que se encargar� de visualizar un
mensaje indicando que est� dentro de la funci�n, permitiendo que al pulsar la tecla <Enter> deje
la funci�n y visualice de nuevo el men�. S�lo la opci�n Salir, provoca la finalizaci�n del
programa.*/

//En esta version NO uso el archivo de cabecera conio.h (solo windows) para mantenernos en el est�ndar de C.

#include <stdio.h>
#include <stdlib.h> // system().

int main(int argc, char *argv[])
{
	int input;
	int uno();
	int dos();
	int tres();
	
	do {
		system("cls");
		printf("MENU DE %s\n\n",argv[1]);
		printf("1.- Llamada a 1\n");
		printf("2.- Llamada a 2\n");
		printf("3.- Llamada a 3\n");
		printf("4.- Salir.\n\n");
		printf("Elija una opcion: ");
		scanf("%i",&input);
		fflush(stdin);
	
	switch(input)
		{
			case 1:
				uno();
				break;
			case 2:
				dos();
				break;
			case 3:
				tres();
				break;
			case 4:
				return 0;	
		}
	}while (input!=4);
	
}
int uno()
{
	system("cls");
	printf("Estoy en la funcion 1.\n");
	printf("Pulse cualquier tecla para volver al menu.");
	getchar(); //getchar() si es una funcion de la biblioteca est�ndar C.
	return 0;
}
int dos()
{
	system("cls");
	printf("Estoy en la funcion 2.\n");
	printf("Pulse cualquier tecla para volver al menu.");
	getchar();
	return 0;
}
int tres()
{
	system("cls");
	printf("Estoy en la funcion 3.\n");
	printf("Pulse cualquier tecla para volver al menu.");
	getchar();
	return 0;
}


