/*a) Construye el c�digo de un programa que rellena una cadena de caracteres con un n�mero
 *   m�ximo de 5 d�gitos. Posteriormente, convertir esta cadena al valor num�rico que contiene.
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
			
			value = (value *10)  + arrayString[i] - 48; //Aqu� es donde se pasa de char poci�n a posici�n a int
			
		}
	
	printf("El valor de la variable VALUE tipo INT es : %i",value);

	return 0;
}
