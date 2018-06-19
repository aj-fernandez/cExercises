/*Construye el código de un programa que pida una cadena de caracteres por teclado e invierte el
 *orden de los caracteres, imprimiendo la cadena resultante por pantalla. Por ejemplo :
 *Cadena Entrante: AVION
 *Cadena Resultante: NOIVA
 */
 
#include <stdio.h>
#include <string.h>
int main()
{
	char source[5];
	char dest[5];
	void sort (char *dest, char *source);
	int i;
	
	printf("Introduzca una cadena de maximo 5 caracteres: ");
	fgets(source, 6,stdin); /* OJO con fgets() esta función si guarda en el string el '\0' !!!! Si pusiera 5 y escribiese casas tomaria solo CASA*/
	fflush(stdin);
	
	for (i=0;i<5;i++)
	{
		printf("Source %i : %c\n",i,source[i]);
	 } 

	printf("La cadena introducida tiene %i caracteres\n",strlen(source));
	printf("\n\nLa cadena introducida para ordenar es: %s\n\n",source);
	
	sort(dest,source);
	
	printf("La cadena ordenada es: %s \n\n",dest);

	return 0;
}
void sort(char *dest, char *source)
{
	int i=0, j; 
	j = strlen(source); 
	while (j!=0) /* Se puede redurcir más poniendo solo (j); para while si solo ponemos un entero o variable lo compara con 0 y si no es = devuelve TRUE */
		{            
			j--;
			dest[i] = source[j];
			i++;
		} /*aqui copia tb el '\0' (gracias a usar el fgets), en caso de usar scanf o gets tendriamos que añadir después del bucle: dest[i] = '\0' (recuerda que
		   *un string es un array char que termina en '\0'!!!)
} 
