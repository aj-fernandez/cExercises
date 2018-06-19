/* Construye el código en lenguaje C de un programa que almacene en una tabla, leyendo
 * desde teclado, una lista de registros con dos campos :
 * 
 *							 Nombre (30 caracteres)
 * 							Edad (Entero de 3 dígitos)
 * 
 * Una vez relleno, el programa solicitará un nombre y deberá devolver la edad
 * correspondiente a esa persona, si coincide con el nombre solicitado.
 */
 
#include <stdio.h>
#include <string.h>
#define MAX_PERSON 3

struct persData {
	char name[20];
	int age;
};

int main()
{
	int i;
	char find[20];
	
	struct persData person[MAX_PERSON];
	
	for (i=0; i<MAX_PERSON; i++) {
		printf("[%i]Persona, introduzca el nombre: ",i+1);
		gets(person[i].name);
		printf("[%i]Persona, introduzca la edad: ",i+1);
		scanf("%i",&person[i].age);
		fflush(stdin);
	}
	
	printf("Introduzca un nombre para buscar su edad: ");
	gets(find);
	
	
	for (i=0; i<MAX_PERSON; i++){
		if (strcmp(find, person[i].name) == 0) { //strcmp() devuelve 0 si son iguales.
			printf("La edad de '%s' son %i años\n",find, person[i].age);
			break;
		}else if (i == MAX_PERSON-1){
			printf("La edad de '%s' NO esta registrada.\n",find);
		}
	}

	return 0;
}
