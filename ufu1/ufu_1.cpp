/*Construye el c�digo en lenguaje C de un programa que, una vez solicitada la introducci�n de un
n�mero que represente una medida en cent�metros, pase este valor a una funci�n llamada
conver que se encarga de transformar los cent�metros en pulgadas. Este valor calculado ser�
impreso por pantalla desde el lugar en el que se realiz� la llamada a la funci�n.*/

#include <stdio.h>
int main()
{
	float conver(float cm);
	float numCen, resultado; /*Con double (para m�s precisi�n) no funciona al poner %d en lugar de %f como c�digo de formato para el printf() y scanf(), buscar + info)*/
	printf("Introduzca un valor en centimetros:");
	scanf("%f",&numCen);
	fflush(stdin);
	printf("El valor de numCem es: %f ",numCen);
	resultado = conver(numCen);
	printf("que corresponden a: %f pulgadas",resultado);
	return 0;
}
float conver(float cm)/*primero lo hac�a con int devolviendo valores extra�os, normal, lo que se espera que devuelva esta funci�n (pulgadas) es float y no int*/
{
	float pulgadas;
	pulgadas = cm * 2.54;
	return (pulgadas);
}
