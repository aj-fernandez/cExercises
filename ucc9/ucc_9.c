/* Construye el c�digo de un programa que pide una lista de 6 nombres (15 caracteres m�ximo) por
 * teclado. El programa deber� hacer lo necesario para devolver el nombre introducido de mayor
 * longitud en caracteres. En el caso de que existan varios con la misma longitud, s�lo imprimir� el
 * primero que encontr�.
 */

#include <stdio.h>
#include <string.h>

#define MAX_NOMBRES 4

int main()
{
    char name[MAX_NOMBRES][15];
	char copName[MAX_NOMBRES][15]; 
    char temp[15];
    
    int i, j;
    
    for (i=0;i<MAX_NOMBRES;i++) {
			printf("Introduce un nombre: ");
    		gets(name[i]);
	}
	
	for (i=0; i<MAX_NOMBRES; i++) { //Los ordeno de manera descendente para solo imprimir el primero.
		for (j=i+1; j<MAX_NOMBRES; j++)
			if(strlen(name[i]) < strlen(name[j])) {
				strcpy(temp, name[j]);
				strcpy(name[j],name[i]);
				strcpy(name[i], temp);
			}
		}
		
	printf("El nombre con mas caracteres es: '%s'.", name[0]);

	return 0;	
}
 
  
