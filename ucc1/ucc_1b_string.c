/*Construye el código de un programa que rellena una variable numérica con un número de
 *varios dígitos. Posteriormente, se pasa este número a una cadena de caracteres. Al revés que el
 *anterior.
 */ 

#include <stdio.h>
#include <string.h>

void sort(char *pTemp, char *pString) //Podía no haber sido void y devolver un string pero creo que mejor pasarle punteros y que trabaje sobre el string original.
{ 
	int i=0, j; 
	j = strlen(pTemp);

	while (j--) 
		{		
			pString[i++] = pTemp[j];
		}
}
int main()
{
	int num,digit;
	int i=0;
	char numTemp[5],numChar[5];
	
	printf("Introduce un numero (maximo 5 digitos): ");
	scanf("%i",&num);

	printf("El numero valor de la variable tipo INT 'num' es: %i\n\n",num);
	
	while(num)
		{
    		digit = num % 10;
    		numTemp[i] = digit + 48;
    		i++;
    		num = num / 10;
		}
		
	sort(numTemp, numChar);
	
	printf("El valor del string numChar es: %s\n",numChar);

	return 0;
} 
