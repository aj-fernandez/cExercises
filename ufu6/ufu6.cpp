/*Construye el c�digo en lenguaje C de un programa que recibe a trav�s de la l�nea de comandos
un nombre de pila. Una vez hecho esto, aparecer� un men� de tres opciones en pantalla como el
que sigue, de forma que al pulsar el n�mero correspondiente a la opci�n elegida, invoque una
funci�n con el nombre del n�mero introducido (1 -> uno) que se encargar� de visualizar un
mensaje indicando que est� dentro de la funci�n, permitiendo que al pulsar la tecla <Enter> deje
la funci�n y visualice de nuevo el men�. S�lo la opci�n Salir, provoca la finalizaci�n del
programa.*/

#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int input;
	int uno();
	int dos();
	int tres();
	
	printf("MENU DE %s\n\n",argv[1]);
	printf("1.- Llamada a 1\n");
	printf("2.- Llamada a 2\n");
	printf("3.- Llamada a 3\n");
	printf("4.- Salir.\n\n");
	printf("Elija una opcion: ");
	scanf("%i",&input);
	
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
}
int uno()
{
	printf("Estoy en la funcion 1.\n");
	printf("Pulse cualquier tecla para volver al menu.");
	getch();
	return 0;
}
int dos()
{
	printf("Estoy en la funcion 2.\n");
	printf("Pulse cualquier tecla para volver al menu.");
	getch();
	return 0;
}
int tres()
{
	printf("Estoy en la funcion 3.\n");
	printf("Pulse cualquier tecla para volver al menu.");
	getch();
	return 0;
}


