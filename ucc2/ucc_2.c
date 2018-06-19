/*Construye el código de un programa que pida una cadena de caracteres por teclado e imprima la
 *misma cadena pero poniendo sus letras en orden alfabético. Por ejemplo : AVION AINOV
 *
 *Me han dado muchos problemas los contadores, sustituir 'k' por 'i' para replicarlo (muestra un 
 *carácter más, supongo que 'aux' crea una nueva posición al final del array.
 *
 *Margen de mejora: si introduzco una cadena de menos de 4 caracteres tras la ordenación los X
 *primeros caracteres son 0 y el último printf()no muestra nada, hay que hacer que pida una cadena
 *, cuente los caracteres y entonces si cree un array de dicha longitud. fgets(arrayString, 3, stdin);
 */


#include <stdio.h>

int main()
{
	char arrayString[4];
	int i,j,k,aux;
	
	printf("Introduce una cadena de maximo 4 caracteres: ");
	gets(arrayString);
	
	printf("La cadena es: %s\n",arrayString);
	
	for(i=0;i<4;i++) /* Compruebo la cadena */
	{
		printf("La posicion %i de arrayString es: %i\n",i,arrayString[i]);
	}
	
	
	printf("\n");
	printf("\n");
	printf("\n");
	
	for (k=0;k<4;k++) /* Uso el método Bubble Sort */
	{
        for(j=0;j<3;j++)
        {
            if(arrayString[k] < arrayString[j])
            {
                aux = arrayString[k];
                arrayString[k] = arrayString[j];
                arrayString[j] = aux;
            }
        }
    }
	
	for(i=0;i<4;i++) /* Compruebo la ordenación */
	{
		printf("La posicion %i de arrayString es: %i\n",i,arrayString[i]);
	}
	
	printf("La cadena es: %s\n",arrayString);
}
