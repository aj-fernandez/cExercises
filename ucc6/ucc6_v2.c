/* Construye el código de un programa que después de pedir una frase por teclado formada por dos
 * palabras, elimine su espacio en blanco y la imprima de nuevo pero sin espacios en blanco. Por
 * ejemplo :
 */

#include <stdio.h>

void removeSpace(int lenght, char *noSpace )
{
	int i,j;
	
	for ( i = 0, j = 0; i < lenght; i++){
        noSpace[i-j] = noSpace[i];
        if(noSpace[i] == ' ') { // Si lo que ha copiado es un espacio aumenta 'j' para que en la siguiente iteración se sobrescriba.
        	j++;
		}
	}
	noSpace[i] = '\0'; // Sin esto también funciona pero creo que debería de añadir siempre el carácter de fin de cadena.
}
int main()
{
	char words[20];
	
	int i, strLenght;
	
	printf("Introduzca 2 palabras: ");
	gets(words);
	
	for (i=0; words[i] != '\0'; i++) {
		strLenght++;
	}
	
	printf("String words[] '%s' con longitud '%i'\n",words,strLenght);
	
	removeSpace(strLenght, words);
	
	printf("words[] tratado con removeSpace() es: %s\n",words);
	
	return 0;
}
