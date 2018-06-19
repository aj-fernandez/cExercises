/*Construye el código de un programa que permite la introducción de dos series de caracteres
 *sobre sendos arrays de la misma dimensión. Habrá que indicar la posición donde se encuentren
 *caracteres coincidentes mediante mensajes como “Posición 4, coincidente.”.
 */
 
#include <stdio.h>

int main()
{
	char arrayOne[5];
	char arrayTwo[5];
	int i;
	
	printf("Introduce un caracter y pulsa ENTER hasta rellenar el primer array de 6 posiciones: \n ");
	for (i=0 ; i<6 ; i++)
	{
		scanf("%c",&arrayOne[i]);
		fflush(stdin);
	}
	
	printf("Introduce un caracter y pulsa ENTER hasta rellenar el segundo array de 6 posiciones: \n ");
	for (i=0 ; i<6 ; i++)
	{
		scanf("%c",&arrayTwo[i]);
		fflush(stdin);
	}
	
	/* Procedemos a la comparación posición por posición en busca de caracteres coincidentes */
	
	for (i=0;i<6;i++)
	{
		if (arrayOne[i]==arrayTwo[i])
		{
			printf("El caracter %c esta repetido en la posicion %i de ambos arrays.\n",arrayOne[i],i);
		}
	}
	
	return 0;
}
