/*a) Construye el código de un programa que rellena una cadena de caracteres con un número
 *   máximo de 5 dígitos. Posteriormente, convertir esta cadena al valor numérico que contiene.
 */

#include <stdio.h>

int main()
{
	char arrayString[5];
	int value, temp, i;
	
	for (i=0;i<5;i++)
		{
			printf("Introduce un numero para la posicion arrayString[%i]: ",i);
			scanf("%c",&arrayString[i]);
			fflush(stdin);
			
			value = (value *10)  + arrayString[i] - 48; //Aquí es donde se pasa de char poción a posición a int
			
		}
	
	printf("El valor de la variable VALUE tipo INT es : %i",value);

	return 0;
}
