/*Construye el código en lenguaje C de un programa que, una vez solicitada la introducción de un
número que represente una medida en centímetros, pase este valor a una función llamada
conver que se encarga de transformar los centímetros en pulgadas. Este valor calculado será
impreso por pantalla desde el lugar en el que se realizó la llamada a la función.*/

#include <stdio.h>
int main()
{
	float conver(float cm);
	float numCen, resultado; /*Con double (para más precisión) no funciona al poner %d en lugar de %f como código de formato para el printf() y scanf(), buscar + info)*/
	printf("Introduzca un valor en centimetros:");
	scanf("%f",&numCen);
	fflush(stdin);
	printf("El valor de numCem es: %f ",numCen);
	resultado = conver(numCen);
	printf("que corresponden a: %f pulgadas",resultado);
	return 0;
}
float conver(float cm)/*primero lo hacía con int devolviendo valores extraños, normal, lo que se espera que devuelva esta función (pulgadas) es float y no int*/
{
	float pulgadas;
	pulgadas = cm * 2.54;
	return (pulgadas);
}
