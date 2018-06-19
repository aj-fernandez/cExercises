/*Construye el código de un programa que rellena una variable numérica con un número de
 *varios dígitos. Posteriormente, se pasa este número a una cadena de caracteres. Al revés que el
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
    		digit = num % 10; //el resto de cualquiera cifra dividida entre 10 es el último dígito.
    		numTemp[i] = digit + 48;
    		i++;
    		j++; //cuento el número de dígitos para en el siguiente while saber cuantos tengo que ordenar. 
    		num = num / 10; // como 'num' es int no toma la parte decimal y así consigo eliminar el último dígito.
		}
	
	while (j--) 
		{		
			numChar[k++] = numTemp[j];
		}
	
	printf("El valor del string numChar es: %s\n",numChar);

	return 0;
} 
