/*Construye el código en lenguaje C de un programa que realice una copia de una
 *estructura rellenada por teclado similar a la utilizada en el UES-2 y la imprima por pantalla.
 */
 
#include <stdio.h>
#include <string.h>
#define MAX_PERSON 8

struct persData {
	char name[20];
	char addr[30];
};


int main()
{
	struct persData person[MAX_PERSON];
	
	struct persData bckpPerson[MAX_PERSON];
	
	int i;
	
	
		printf("Persona, introduzca el nombre: ");
		gets(person.name);
		printf("Persona, introduzca la direccion: ");
		gets(person.addr);
	
		bckpPerson = person;
	
	
	return 0;
}
