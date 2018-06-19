/* Construye el código en lenguaje C de un programa que pidiendo por teclado la
 * introducción del nombre, apellidos, edad y sueldo de un trabajador, quedan almacenados en
 * estructura adecuada y posteriormente se imprimen por pantalla. La limitación es que el
 * acceso a la estructura se realizará mediante un puntero.
 */
 
#include <stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 3

struct empData {
	char name[20];
	char lastName[30];
	int age;
	float salary;
};


int main()
{
	struct empData emp; //Variable del tipo 'struct empData'.
	
	struct empData *pEmp; // Declaración de puntero a un array de estructuras tipo 'struct empData'.
							  
	pEmp = &emp; //Asigno el puntero  a la dirección de mi  estructura.
	 
	printf("Introduzca el nombre: ");
	gets(pEmp.name);
	printf("Introduzca apellidos: ",i+1);
	gets(*pEmp.lastName);
	printf("Introduzca edad: ",i+1);
	scanf("%i",&*pEmp.age);
	fflush(stdin);
	printf("Introduzca salario: ",i+1);
	scanf("%f",&*pEmp.salary);
	fflush(stdin);
	
	printf("Empleado numero es: %s %s con edad %i y salario de %.2f\n", i+1, *pEmp.name, *pEmp.lastName,*pEmp.age, *pEmp.salary);
	
	
	return 0;
}
