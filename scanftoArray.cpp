#include <stdio.h>
int main()
{
	int cont,num;
	int contArray;
	int arrayNum[5];
	for (cont=0;cont<5;cont++)
	{
		printf("Introduce un numero: ");
		scanf("%i",&arrayNum[cont]);/*Se aprovecha el contador para indicar cual es la posici�n del array en la que almacenar el n�mero introducido*/
		fflush(stdin);
	}
	for (contArray=0;contArray<5;contArray++)
	printf("Posicion [%i] =  %i\n",contArray,arrayNum[contArray]);/*Se aprovecha el contador para indicar cual es la posici�n del array que mostramos*/
}
int parser()
{
	
}
