/* Construye el código en lenguaje C de un programa que almacene en una tabla creada
 * en la función principal, una lista de registros con dos campos como:
 * 							
 * 							Nombre (30 caracteres)
 * 							Edad (Entero de 3 dígitos)
 * 
 * que se rellenarán en la función RELLENA. Hecho esto, en la función principal se
 * solicitará un nombre y deberá devolver la edad correspondiente a esa persona, si coincide con
 * el nombre solicitado.
 */

#include <stdio.h>
#include <string.h>
#define MAX_PERSON 3

struct persData {
	char name[30];
	int age;
};

void  fillPerson(struct persData (*pPerson)[]) //recibe un puntero a un array de estructuras de ahí que el parámetro formal tenga esta forma.
{
	int i;
	
	for (i=0; i<MAX_PERSON; i++) {
		printf("[%i]Persona, introduzca el nombre: ",i+1);
		gets((*pPerson)[i].name);
		printf("[%i]Persona, introduzca la edad: ",i+1);
		scanf("%i",&(*pPerson)[i].age);
		fflush(stdin);
	}
}

int main()
{
	int i;
	char find[20];
	
	struct persData person[MAX_PERSON];
	
	fillPerson(&person); // La funcion fillPerson() recibe un puntero por lo que paso la dirección de memoria.
		
	printf("Introduzca un nombre para buscar su edad: ");
	gets(find);
	
	//Ale dice que por un while strcmp no sea find...mas eficiente porque no da tantas vueltas.
	
	for (i=0; i<MAX_PERSON; i++){
		if (strcmp(find, person[i].name) == 0) { 
			printf("La edad de '%s' son %i años\n",find, person[i].age);
			break;
		}else if (i == MAX_PERSON-1){
			printf("La edad de '%s' NO esta registrada.\n",find);
		}
	}

	return 0;
}
