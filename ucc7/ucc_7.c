/* Construye el c�digo de un programa que pida el nombre (s�lo el de pila) de 12 alumnos.
 * Posteriormente deber� ordenar alfab�ticamente �stos nombres. Una vez hecho esto, se solicitar�
 * al usuario la introducci�n del nombre de un alumno. El programa deber� buscarlo y si lo
 * encuentra imprimir� el nombre del alumno y la posici�n que ocupa.
 */

#include<stdio.h>
#include<string.h> // permite strcmp y strcpy.

#define MAX_ALUMNOS 12

int main()
{
    char name[MAX_ALUMNOS][20];
    char temp[20];
    char find[20];
    char *pos;
    
    int i, j, k, l, m;
    
    for (l=0;l<MAX_ALUMNOS;l++) {
    	printf("Introduce un nombre: ");
        gets(name[l]);
	} 										//En 'l' queda almacenado el n�mero de nombres/strings/filas.

    for(i=0; i<l-1; i++) { 					//Compara strings seg�n su c�digo ASCII y las ordena.
        k=i;
        strcpy(temp, name[i]);
        for(j=i+1; j<l; j++) { 				//Compara el actual con el siguiente y si es mayor el siguiente ir� a temp y el actual lo sobrescribir�.
            if(strcmp(name[j], temp)<0) { 	//Si la primera cadena es menor (ASCII) devuelve '-1', igual '0' y mayor '1'.
                k=j;
                strcpy(temp, name[j]); 		//Copia el menor en el temp
            }
        }
        strcpy(name[k],name[i]);
        strcpy(name[i],temp);
    }

    for(i=0; i<l; i++) {
        printf("Nombre %i: %s\n",i , name[i]);
    }
    
    printf("Introduzca el nombre de un alumno para buscar: ");
    gets(find);
    
    for (m=0; m<MAX_ALUMNOS; m++) { 		//B�squeda en la matriz de alumnos
    	pos = strstr(name[m],find);
    	if (pos != NULL) { 					//strstr() devuelve un puntero que es nulo si no encuentra la palabra.
    		printf("Ocurrencia de '%s' encontrada en la posicion [%i]\n",find,m);
		}else if((m==MAX_ALUMNOS-1) && (pos == NULL)) { 
			printf("No se ha encontrado ninguna ocurrencia de '%s'.",find);
		}    	
	}

  return 0;
}
