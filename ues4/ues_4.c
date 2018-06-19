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
	struct persData temp;
	
	int i, j;
	
	for (i=0; i<MAX_PERSON; i++) {
		printf("[%i]Persona, introduzca el nombre: ",i+1);
		gets(person[i].name);
		printf("[%i]Persona, introduzca la direccion: ",i+1);
		gets(person[i].addr);
	}
	
	for (i=0; i<MAX_PERSON; i++) {
		bckpPerson[i] = person[i];
	}
	
	for (i=0 ; i<MAX_PERSON; i++) {
		for (j=i+1; j<MAX_PERSON; j++) {
			if (strcmp(bckpPerson[i].name, bckpPerson[j].name) > 0) { //strcmp() devuelve un numero positivo si la 1a es mayor que la 2a.
				temp = bckpPerson[j];
				bckpPerson[j] = bckpPerson[i];
				bckpPerson[i] = temp;
			}
		}
	}
	
	for (i=0; i<MAX_PERSON; i++) { //Control
		printf("ORIGINAL-Nombre de la persona %i es: %s y address es: %s \n",i+1,person[i].name, person[i].addr);
	}
	
	for (i=0; i<MAX_PERSON; i++) { //Control de copia y ordenación descentente
		printf("BACKUP-Nombre de la persona %i es: %s y address es: %s \n",i+1,bckpPerson[i].name, bckpPerson[i].addr);
	}
	
	return 0;
}
