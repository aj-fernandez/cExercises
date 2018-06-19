/*
 *Construye el código C, en modo recursivo, de un programa que dada una cantidad a pagar y
 *conociendo los distintos tipos de billetes y monedas con el que se paga en euros, devuelva
 *desglosado el importe de esa compra con el número mínimo de monedas y billetes necesarios.
 */

#include <stdio.h>

int main()
{
	int operacion(float quant);
	float quantity;
	
	printf("Especifique la cantidad en euros: ");
	scanf("%f",&quantity);
	fflush(stdin);
	printf("Para %.2f la cantidad minima de monedas y billetes es:\n",quantity);
	
	operacion(quantity);
	
	return 0;
}
int operacion(float quant)
{
	float sub;
	int i;
	static int j = 0;
	static int op[14]; 
	float cash[] = {500,200,100,50,20,10,5,2,1,0.5,0.2,0.1,0.05,0.02,0.01};
	
	if(quant!=0)
	{
		op[j]= quant / cash[j];
		sub = op[j] * cash[j];
		quant = quant - sub;
		j++;
		return operacion(quant);
	}

	/*Recorremos el array con el número de monedas y billetes en que dividimos la cantidad introducida, en caso
	 *de que sea 0 no muestra nada y en caso contrario mostramos la cantidad de estos haciendo distinción de si 
	 *son monedas o billetes.
	 */
	
	for ( i=0 ; i<15 ; i++ )
	{
		if (op[i] != 0)
		{
			if ( i>=7 ) /* op[0] a op[6] son billetes, op[7] en adelante, monedas*/
			{
				printf("%i monedas de %.2f \n ",op[i],cash[i]);
			}else{
				printf("%i billetes de %.2f \n ",op[i],cash[i]);
			}
		}	
	}
	return 0;
}
