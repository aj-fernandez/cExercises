/* Construye el c�digo de un programa que permita la introducci�n de una clave secreta, de forma
 * que al teclearla, s�lo puedan verse asteriscos. El programa imprimir� en pantalla lo escrito al
 * final (�as�pa� nosotros).
 */
 
#include <stdio.h>

int main()
{
	char passw[6];
	char temp;
	int i;
	
	printf("Bienvenido al sistema.\nTeclee su clave: ");
	for (i=0; i<6; i++) {
		temp = getch();
		printf("%c",42);
		passw[i] = temp;	
	}

	printf("\n\nPassword es: %s",passw);

	return 0;
}
