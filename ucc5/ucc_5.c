/*Construye el código de un programa que pida una cadena de caracteres por teclado y verifique si
 *se trata de un palíndromo (palabra que se lee igual de izquierda a derecha que de derecha a
 *izquierda, como por ejemplo : RADAR o RECONOCER).
 */

#include <stdio.h>

void invert(char *pDest, char *pSource)
{ 
	int i = 0, j = 0, k = 0;
	int strLenght;
	  	
	for ( i = 0;pSource[i] != '\0' ; i++) { /* Contamos el número de caracteres */
		strLenght++;
	}
	
	while (strLenght--) {		
			pDest[k] = pSource[strLenght];
			k++;
	} 	
}
int main()
{
	char strSource[8];
 	char invSource [8];
 	
	int i = 0, j = 0, k, l = 0;
	int strLenght;
		 
	printf("Introduce una palabra de maximo 8 caracteres: ");
 	gets(strSource);
	 
	invert(invSource, strSource);
 	printf("La cadena invertida es: %s \n\n",invSource);
 	
	for ( i = 0; strSource[i] != '\0'; i++) {
		strLenght++;
	}

	for (i=0 ; i<=strLenght; i++) {
	
		if (invSource[i] != strSource[i] ) {
			printf("No es un palindromo");
			break;
		}
		if (i==strLenght) {
			printf("Si es un palindromo");
		}
	}
	 
	return 0;
}
