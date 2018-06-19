/* Construye el código de un programa que pida una cadena de caracteres por teclado y asigne a
 *otras dos cadenas el resultado de cortar la cadena introducida por la mitad. Finalmente,
 *imprimir la cadena entrante y ambas cadenas resultantes. (Dos versiones posibles: una sin
 *funciones específicas de cadena y una utilizándolas)
 *Nota: La cadena tecleada tendrá como máximo 20 caracteres.
 */
 
#include <stdio.h>
#include <stdlib.h>

int main()
 {
 	char strSource[20];
 	char strChunkOne [10];
 	char strChunkTwo [10];
 	
 	int strLenght, chunkSize;
 	int i = 0;
	int j = 0;
		 
	printf("Introduce un string de maximo 20 caracteres: ");
 	gets(strSource); 
	  	
	for ( i = 0;strSource[i] != '\0' ; i++) { /* Contamos el número de caracteres */
		strLenght++;
	}
	printf("El numero de caracteres del string es: %i\n", strLenght);
	
	chunkSize = strLenght / 2;
	
	while (j <= strLenght) {
    	if (j < chunkSize) {	
				strChunkOne[j] = strSource[j];
				printf("Rellenando strChunkOne\n"); //control	 
			}else {
				strChunkTwo[j-chunkSize] = strSource[j]; // i - chunkSize -> para que empiece a rellenar splitTwo desde su posición 0.
				printf("Rellenando strChunkTwo\n"); //control
			 }
		j++;	  	
	  	}
 	
 	printf("El array strChunkOne es: %s\n",strChunkOne);
	printf("El array strChunkTwo es: %s\n",strChunkTwo);
 	
 	return 0;
 }
 
 
