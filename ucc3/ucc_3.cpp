/*Construye el c�digo de un programa que pida una cadena de caracteres por teclado e invierte el
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
	void sort (char *dest,  char *source);
	
	printf("Introduzca una cadena de maximo 5 caracteres: ");
	fgets(source, 6,stdin); /* OJO con fgets(), es m�s seguro que gets o scanf PERO a�ade siempre al final el '\n' de nueva linea !!*/ 
	fflush(stdin);			/* por lo que hay que ponerle siempre un car�cter m�s del n�mero que queramos almacenar*/
								
	printf("\n\nLa cadena introducida para ordenar es: %s\n\n",source);
	
	sort(dest,source);
	
	printf("La cadena invertida es: %s \n\n",dest);

	return 0;
}
void sort(char *pDest, char *pSource)
{ 
	int i=0, j; 
	j = strlen(pSource);

	while (j--) 
		{		
			pDest[i] = pSource[j];
			i++;
		} 	
	/* Se realiza el cambio de orden. While devuelve true o false, la condici�n puede ser entero o un puntero, (j--) equivale
	 * a while (j!=0) {j--}, es un postdecremento, la primera vez entra con j=5 la siguiente j=4, etc.
	 *
	 * PoC "CASAS"
	 *
	 *  1� iteraci�n:
	 *   Copia en pDestino[0] el contenido de pSource[5] (vale 's' ) 
	 *  	decrem j-1=4
	 *      increm i+1=1
	 *
	 *  2� iteraci�n: (devuelve TRUE porque j no es 0(si en la condici�n de while solo ponemos un entero o puntero devuelve TRUE mientras no sea 0!!))
	 *   Copia en pDestino[1] el contenido de pSource[4] (vale 'a' )
	 *	    decrem j-1=3
	 *      increm i+1=2
	 *
	 *  3� iteraci�n:
	 *   Copia en pDestino[0] el contenido de pSource[5] (vale 's' ) 
	 *	    decrem j-1=2
	 *      increm i+1=3
	 *
	 *  4� iteraci�n: (devuelve TRUE porque j no es 0(si en la condici�n de while solo ponemos un entero o puntero devuelve TRUE mientras no sea 0!!))
	 *   Copia en pDestino[1] el contenido de pSource[4] (vale 'a' )
	 *	    decrem j-1=1
	 *      increm i+1=4
	 *
	 *  5� iteraci�n: (devuelve TRUE porque j no es 0(si en la condici�n de while solo ponemos un entero o puntero devuelve TRUE mientras no sea 0!!))
	 *   Copia en pDestino[1] el contenido de pSource[4] (vale 'a' )
	 *	    decrem j-1=0
	 *      increm i+1=5
	 *
	 *  6� iteraci�n: NO entra en el loop debido a que J=0 y el while devuelve FALSE.
	 *
	 * NOTA: Esto se puede reducir a�n m�s: while (j--) {dest[i++] = source[j]} ('i' se incrementa cada vez que entra en el bucle), ya no s� hacerlo m�s corto. 
	 */
} 
