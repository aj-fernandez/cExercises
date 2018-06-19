/*Construye el código en lenguaje C de un programa que recibe a través de la línea de comandos
un nombre de pila. Una vez hecho esto, aparecerá un menú de tres opciones en pantalla como el
que sigue, de forma que al pulsar el número correspondiente a la opción elegida, invoque una
función con el nombre del número introducido (1 -> uno) que se encargará de visualizar un
mensaje indicando que está dentro de la función, permitiendo que al pulsar la tecla <Enter> deje
la función y visualice de nuevo el menú. Sólo la opción Salir, provoca la finalización del
programa.*/

//En esta version NO uso el archivo de cabecera conio.h (solo windows) para mantenernos en el estándar de C.

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
	getchar(); //getchar() si es una funcion de la biblioteca estándar C.
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


