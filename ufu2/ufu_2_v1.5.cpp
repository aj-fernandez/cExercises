/*Versión 2, aquí añado una función pero el recuento de numeros se sigue haciendo en el MAIN, una vez completada
pasaré el código de conteo a la funcion PARSER puesto que en esta se limitará a mostrar los resultados*/

#include <stdio.h>
int main()
{
	int cont,num;
	int contArray;
	int arrayNum[5];
	int numNeg = 0;
	int numNul = 0;
	int numPos = 0;
	void parser(int *neg, int *nul, int *pos);
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
	printf("\nArgumentos que pasamos a la funcion PARSER:\n\n numNeg:%i\n numNul:%i\n numPos:%i\n\n",numNeg,numNul,numPos);
	parser(&numNeg, &numNul, &numPos);
	return 0;
}
void parser(int *neg, int *nul, int *pos)
{
	printf("Parametros formales funcion PARSER: %i , %i , %i\n\n" ,*neg, *nul, *pos);
	printf("El usuario introdujo %i numeros negativos, %i postivos y %i nulos \n", *neg, *pos, *nul);
}
