#include <stdio.h>
int main()
{
	int a=1;
	int *i;
	char *c;
printf("El tama�o de short (entero corto), es: %d\n", sizeof(short));
printf("El tama�o de int (entero), es: %d\n", sizeof(int));
printf("El tama�o de long (entero largo), es: %d\n", sizeof(long));
printf("El tama�o del i puntero (int en este caso), es: %d\n", sizeof(*i));
printf("El tama�o del c puntero (char en este caso), es: %d\n", sizeof(*c));

printf("a: %d\n",a);
printf("i: %d\n",i);

i=&a;
(*i)--;
printf("a: %d\n",a);
printf("la direccion de a: %x\n",&a);
printf("i: %x\n",i);





}
