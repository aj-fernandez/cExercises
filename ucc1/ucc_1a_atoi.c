/*a) Construye el código de un programa que rellena una cadena de caracteres con un número
 *   máximo de 5 dígitos. Posteriormente, convertir esta cadena al valor numérico que contiene.
 */

#include <stdio.h>

int main()
{
	char arrayString[4];
	int value;
	int i;
	
	for (i=0;i<5;i++)
	{
		printf("Introduce un numero: ");
		scanf("%c",&arrayString[i]);
		fflush(stdin);
	}
	
	value = atoi(arrayString);
	
	printf("El numero es : %i",value);

	
	return 0;
}
