#include <stdio.h>
int main()
{
	long valor1 = 200000, valor2;
	long *ptrln;
	ptrln = &valor2;
	printf("El contenido de valor1 es: %i\nEl contenido de valor2 es: %i\nEl contenido del puntero ptrln es: %p\n",valor1, valor2, ptrln);
	return 0;
}
