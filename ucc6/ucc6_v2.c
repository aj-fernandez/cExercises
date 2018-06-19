/* Construye el c�digo de un programa que despu�s de pedir una frase por teclado formada por dos
 * palabras, elimine su espacio en blanco y la imprima de nuevo pero sin espacios en blanco. Por
 * ejemplo :
 */

#include <stdio.h>

void removeSpace(int lenght, char *noSpace )
{
	int i,j;
	
	for ( i = 0, j = 0; i < lenght; i++){
        noSpace[i-j] = noSpace[i];
        if(noSpace[i] == ' ') { // Si lo que ha copiado es un espacio aumenta 'j' para que en la siguiente iteraci�n se sobrescriba.
        	j++;
		}
	}
	noSpace[i] = '\0'; // Sin esto tambi�n funciona pero creo que deber�a de a�adir siempre el car�cter de fin de cadena.
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
