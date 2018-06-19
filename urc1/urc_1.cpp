/*Construye el código C, en modo recursivo, de un programa que llamará a una función de 
 *nombre potencia que tenga como argumentos de entrada x y n, devuelva x elevado a n. El
 *argumento de x es double y el argumento de n es tipo int. Finalmente, deberá aparecer por
 *pantalla tanto los argumentos introducidos inicialmente, como el resultado obtenido.
 *
 *
 *En este ejercicio me tomo la libertad de tomar los valores de la base y el exponente
 *pasándolos como argumentos para la función main() usando los parámetros formales establecidos
 *en el estándar de C para este propósito, int argc (nº de argumentos) y el array argv[] donde se almacenarán estos
 *valores para de esta manera asentar los conocimientos sobre la función main() y el uso correcto
 *de los valores de retorno así como aprender a convertir strings a los tipos de datos que propone
 *el enunciado.
 *
 *
 *Debido a que estos valores de los argumentos se almacenan en argv[x] como strings de caracteres usaré las 
 *funciones que correspondan para pasar string a doble y entero largo (strtod() y strtol())
 *puesto que el enunciado del ejercicio pide explícitamente que llegen con estos tipos a la
 *funcion que calculará la potencia.
 *
 *
 *Este me ha enseñado bastante debido a un error garrafal, en printf usaba %d (pensaba 
 *que eso era double) y lógicamente la conversión de xCon mostraba un resultado erróneo,
 *mientras que realmente es %lf (long float), probé con otras funciones con el mismo fin
 *como strtod() [double xCon = strtod(argv[1],'\0');] y atof() [double xCon = atof(argv[1]);].
 */

#include <stdio.h>
#include <stdlib.h> //para poder usa strtol() [String to long]  y strtod() [String to double]

int main(int argc, char *argv[])
{
	double potencia(double x, int n);
	double xCon = strtod(argv[1],'\0'); // conversión de string a doble,  \0 es igual que NULL
	int nCon = strtol(argv[2],'\0', 10); //conversión de string a entero largo, uso de strtol (string, endpointer, base)
	printf("Los argumentos pasados a main() son:\nx=%lf\nn=%i\n",xCon,nCon); //control de conversión de strings de argv[] a doble y entero largo
	printf("\nLa potencia de %lf elevado a %i es: %lf",xCon,nCon,potencia(xCon,nCon));
	return 0;
}
double potencia(double x, int n) //multiplica base por exponente y resta 1 al exponente 'n' en cada iteración hasta que sea 0.
{
	//printf("Los argumentos pasados a potencia() son:\nx=%lf\nn=%i\n",x,n); //control de recepción en la función
	if (n==0)
	{
		return 1;
	}else{
		return x*potencia(x,n-1);		
	}
}

