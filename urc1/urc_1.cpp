/*Construye el c�digo C, en modo recursivo, de un programa que llamar� a una funci�n de 
 *nombre potencia que tenga como argumentos de entrada x y n, devuelva x elevado a n. El
 *argumento de x es double y el argumento de n es tipo int. Finalmente, deber� aparecer por
 *pantalla tanto los argumentos introducidos inicialmente, como el resultado obtenido.
 *
 *
 *En este ejercicio me tomo la libertad de tomar los valores de la base y el exponente
 *pas�ndolos como argumentos para la funci�n main() usando los par�metros formales establecidos
 *en el est�ndar de C para este prop�sito, int argc (n� de argumentos) y el array argv[] donde se almacenar�n estos
 *valores para de esta manera asentar los conocimientos sobre la funci�n main() y el uso correcto
 *de los valores de retorno as� como aprender a convertir strings a los tipos de datos que propone
 *el enunciado.
 *
 *
 *Debido a que estos valores de los argumentos se almacenan en argv[x] como strings de caracteres usar� las 
 *funciones que correspondan para pasar string a doble y entero largo (strtod() y strtol())
 *puesto que el enunciado del ejercicio pide expl�citamente que llegen con estos tipos a la
 *funcion que calcular� la potencia.
 *
 *
 *Este me ha ense�ado bastante debido a un error garrafal, en printf usaba %d (pensaba 
 *que eso era double) y l�gicamente la conversi�n de xCon mostraba un resultado err�neo,
 *mientras que realmente es %lf (long float), prob� con otras funciones con el mismo fin
 *como strtod() [double xCon = strtod(argv[1],'\0');] y atof() [double xCon = atof(argv[1]);].
 */

#include <stdio.h>
#include <stdlib.h> //para poder usa strtol() [String to long]  y strtod() [String to double]

int main(int argc, char *argv[])
{
	double potencia(double x, int n);
	double xCon = strtod(argv[1],'\0'); // conversi�n de string a doble,  \0 es igual que NULL
	int nCon = strtol(argv[2],'\0', 10); //conversi�n de string a entero largo, uso de strtol (string, endpointer, base)
	printf("Los argumentos pasados a main() son:\nx=%lf\nn=%i\n",xCon,nCon); //control de conversi�n de strings de argv[] a doble y entero largo
	printf("\nLa potencia de %lf elevado a %i es: %lf",xCon,nCon,potencia(xCon,nCon));
	return 0;
}
double potencia(double x, int n) //multiplica base por exponente y resta 1 al exponente 'n' en cada iteraci�n hasta que sea 0.
{
	//printf("Los argumentos pasados a potencia() son:\nx=%lf\nn=%i\n",x,n); //control de recepci�n en la funci�n
	if (n==0)
	{
		return 1;
	}else{
		return x*potencia(x,n-1);		
	}
}

