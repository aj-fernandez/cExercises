/*En esta versión no estoy usando la función, todo está en el main*/
#include <stdio.h>
int main()
{
	int cont,num;
	int contArray;
	int arrayNum[5];
	int numNeg;
	int numNul;
	int numPos;
	for (cont=0;cont<5;cont++)
	{
		printf("Introduce un numero: ");
		scanf("%i",&arrayNum[cont]);/*Se aprovecha el contador para indicar cual es la posición del array en la que almacenar el número introducido*/
		if (arrayNum[cont]>0)
		{
			numPos++;
		}else{
			if (arrayNum[cont]<0)
			{
				numNeg++;
				
			}else{
				numNul++;
			}
		}
		fflush(stdin);
	}
	for (contArray=0;contArray<5;contArray++)
	printf("Posicion [%i] =  %i\n",contArray,arrayNum[contArray]);/*Se aprovecha el contador para indicar cual es la posición del array que mostramos*/
	printf("El usuario introdujo %i numeros negativos, %i positivos y %i nulos", numNeg, numPos, numNul);
	return 0;
}
