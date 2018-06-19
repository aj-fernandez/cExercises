/* PoC about POINTERS */

#include <stdio.h>

int main()
{
	int a = 5;
	char cadenarray[] = "hola";
	char *cadenapuntero = "adios";
	char *punterocadenaarray;
	char *punteropuntero;	
	
	int arrayInt[5]={20,30,40,50,60};
	int *pInt;
	char *pChar;

	printf("Apunto con pInt a &arrayInt (la primera direccion de memoria que contiene a arrayInt[0] que vale 20)\n");

	pInt = arrayInt; //como un array no deja de ser un puntero hacia la primera posicion aqui no es obligatorio el '&' para indicar que asignamos la direccion
					//puesto que ya ES la dirección.
	
	printf("%i\n",*pInt);
	
	
	*pInt = a; // Asigna a la direccion apuntada por *pInt (arrayInt[0] ahora mismo que vale 20) el valor de a (5)
	
	printf("%i\n",arrayInt[0]);
	(*pInt)++; // Incrementa el contenido apuntado por *pInt que es arrayInt[0] que vale 5 y después de incrementarlo valdrá 6
	printf("%i\n",arrayInt[0]);
	return 0;
}
