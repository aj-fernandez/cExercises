/* Construye el código en lenguaje C de un programa que lea por teclado varios nombres
 * y direcciones (ocho, por ejemplo) de forma que se almacenen en una estructura, reordene los
 * nombres alfabéticamente y escriba la lista resultante. La limitación es que el acceso a la
 * estructura se realizará mediante un puntero.
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
	struct persData (*pPerson)[]; // Entre () y con [] porque apuntará a un ARRAY de ESTRUCTURAS.
	pPerson = &person; 
	
	struct persData temp; 
	struct persData *pTemp;
	pTemp = &temp;
	
	int i, j;
	
	for (i=0; i<MAX_PERSON; i++) {
		printf("[%i]Persona, introduzca el nombre: ",i+1);
		gets((*pPerson)[i].name);
		printf("[%i]Persona, introduzca la direccion: ",i+1);
		gets((*pPerson)[i].addr);
	}
	
	for (i=0 ; i<MAX_PERSON; i++) {
		for (j=i+1; j<MAX_PERSON; j++) {
			if (strcmp((*pPerson)[i].name, (*pPerson)[j].name) > 0) { //strcmp() devuelve un numero positivo si la 1a es mayor que la 2a.
				*pTemp = (*pPerson)[j];
				(*pPerson)[j] = person[i];
				(*pPerson)[i] = *pTemp;
			}
		}
	}
	
	for (i=0; i<MAX_PERSON; i++) {
		printf("Nombre de la persona %i es: %s y address es: %s \n",i+1,(*pPerson)[i].name, (*pPerson)[i].addr);
	}
	
	return 0;
} 
