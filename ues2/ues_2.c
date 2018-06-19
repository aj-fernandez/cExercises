/* Construye el código en lenguaje C de un programa que lea por teclado varios nombres
 * y direcciones (ocho, por ejemplo) de forma que se almacenen en una estructura, reordene los
 * nombres alfabéticamente y escriba la lista resultante.
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
	
	struct persData temp; //Esto me lo puedo ahorra poniendo MAX_PERSON con uno mas y usando este extra como temporal.
						 //En ese caso en el loop de ordenación tendría que usar 'MAX_PERSON - 1' en las condiciones. 
	
	int i, j;
	
	for (i=0; i<MAX_PERSON; i++) {
		printf("[%i]Persona, introduzca el nombre: ",i+1);
		gets(person[i].name);
		printf("[%i]Persona, introduzca la direccion: ",i+1);
		gets(person[i].addr);
	}
	
	for (i=0 ; i<MAX_PERSON; i++) {
		for (j=i+1; j<MAX_PERSON; j++) {
			if (strcmp(person[i].name, person[j].name) > 0) { //strcmp() devuelve un numero positivo si la 1a es mayor que la 2a.
				temp = person[j];
				person[j] = person[i];
				person[i] = temp;
			}
		}
	}
	
	for (i=0; i<MAX_PERSON; i++) {
		printf("Nombre de la persona %i es: %s y address es: %s \n",i+1,person[i].name, person[i].addr);
	}
	
	return 0;
}
