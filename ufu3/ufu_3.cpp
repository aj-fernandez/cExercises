/*Construye el código en lenguaje C de un programa que mediante una función denominada permuta,
implemente la permutación (intercambio) de los valores de dos variables enteras que se solicitaron por
teclado en la función principal.*/

/*Utilizo punteros como parámetro para la funcion varSwitcher() y de esta manera trabajar directamente con las variables de main()*/

#include <stdio.h>
int main()
{
	int varA;
	int varB;
	void varSwitcher (int *var1, int *var2);
	printf("Introduzca un numero entero para varA: ");
	scanf("%i",&varA);
	fflush(stdin);
	
	printf("Introduzca un numero entero para varB: ");
	scanf("%i",&varB);
	fflush(stdin);
	
	varSwitcher(&varA, &varB);
	return 0;
}
void varSwitcher (int *var1, int *var2)
{
	int copy;
	
	copy = *var2;
	*var2 = *var1;
	*var1 = copy;

	printf("El valor de varA es %i\n",*var1);
	printf("El valor de varB es %i",*var2);
}
