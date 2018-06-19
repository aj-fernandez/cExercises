/* Construye el código de un programa que pida una cadena de caracteres por teclado y asigne a
 *otras dos cadenas el resultado de cortar la cadena introducida por la mitad. Finalmente,
 *imprimir la cadena entrante y ambas cadenas resultantes. (Dos versiones posibles: una sin
 *funciones específicas de cadena y una utilizándolas)
 *Nota: La cadena tecleada tendrá como máximo 20 caracteres.
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
 {
 	char strSource[20];
 	char strChunkOne [10];
 	char strChunkTwo [10];
 	
 	char *pSource = strSource;
 	char *pCone = strChunkOne;
 	char *pCtwo = strChunkTwo;
 	
 	int i=10,j=10;
	
	int k;
	int l=20;
	int m;
	 
	printf("Introduce un string de maximo 20 caracteres: ");
 	fgets(strSource, 21, stdin); 
 	
 	
	for (k=0;k<20;k++)
	{
		printf("La posicion %i de strSource es: %c\n",k,strSource[k]);
	 } 
 	
 	while (l!='\n')
 	{
 		l--;
 		m++;
	 }
 	
 	printf("la longitud del string es: %i",(strlen(strSource))-1);
 	
	 //while (i--)
 	//{
 	//	pCone[] = pSource[];
	// }
 	
 	return 0;
 }
 
 
