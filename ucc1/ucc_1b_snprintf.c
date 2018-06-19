/*a) Construye el c�digo de un programa que rellena una cadena de caracteres con un n�mero
 *   m�ximo de 5 d�gitos. Posteriormente, convertir esta cadena al valor num�rico que contiene.
 *   cadena numero
 *
 *b) Construye el c�digo de un programa que rellena una variable num�rica con un n�mero de
 *   varios d�gitos. Posteriormente, se pasa este n�mero a una cadena de caracteres. Al rev�s que el
 *   anterior.
 */

#include <stdio.h>

int main()
{
	int number,i;
	char convert[5];
	
	printf("Introduce un numero entero de 5 digitos como maximo: ");
	scanf("%i",&number);
	fflush(stdin);
	
	snprintf( convert, 5, "%i", number ); /* Igual que sprintf() pero hay que indicar el tama�o m�ximo, de ah� la n (por convenci�n) */
	
	for (i=0;i<5;i++) /* Comprobaci�n de que el n�mero entero ha sido almacenado como char posici�n a posici�n */
	{
		printf("La posicion %i del array convert es: %c\n",i,convert[i]);
	}
	
	printf("La cadena es: %s",convert);
		
	return 0;
}



//	while(num){
//    digito = num % 10;
//    printf("%d\n", digito);
//    num = num / 10;
//	}
