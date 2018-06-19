/*Construye el c�digo de un programa que rellena una variable num�rica con un n�mero de
 *varios d�gitos. Posteriormente, se pasa este n�mero a una cadena de caracteres. Al rev�s que el
 *anterior.
 */ 

#include <stdio.h>

int main()
{
	int num,digit;
	int i = 0, k = 0;
	int j;
	char numTemp[5],numChar[5];
	
	printf("Introduce un numero (maximo 5 digitos): ");
	scanf("%i",&num);

	printf("El numero valor de la variable tipo INT 'num' es: %i\n\n",num);
	
	while(num)
		{
    		digit = num % 10; //el resto de cualquiera cifra dividida entre 10 es el �ltimo d�gito.
    		numTemp[i] = digit + 48;
    		i++;
    		j++; //cuento el n�mero de d�gitos para en el siguiente while saber cuantos tengo que ordenar. 
    		num = num / 10; // como 'num' es int no toma la parte decimal y as� consigo eliminar el �ltimo d�gito.
		}
	
	while (j--) 
		{		
			numChar[k++] = numTemp[j];
		}
	
	printf("El valor del string numChar es: %s\n",numChar);

	return 0;
} 
