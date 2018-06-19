/*a) Construye el código de un programa que rellena una cadena de caracteres con un número
 *   máximo de 5 dígitos. Posteriormente, convertir esta cadena al valor numérico que contiene.
 *   cadena numero
 *
 *b) Construye el código de un programa que rellena una variable numérica con un número de
 *   varios dígitos. Posteriormente, se pasa este número a una cadena de caracteres. Al revés que el
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
	
	snprintf( convert, 5, "%i", number ); /* Igual que sprintf() pero hay que indicar el tamaño máximo, de ahí la n (por convención) */
	
	for (i=0;i<5;i++) /* Comprobación de que el número entero ha sido almacenado como char posición a posición */
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
