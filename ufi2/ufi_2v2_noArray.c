/* Construye el c�digo en lenguaje C de un programa que cuente el n�mero de registros
 * que tiene el fichero CURRITOS.DAT. Al final deber� imprimirse en pantalla ese n�mero
 * calculado y tambi�n la media de edad de los trabajadores, as� como la suma de los sueldos de
 * estos.
 */

#include <stdio.h>

struct employee
	{
		unsigned int cod;
		char lastN[25];
		char firstN[15];
		unsigned int age;
		float salary;	
	};

int main()
{
	int i = 0;
	
	FILE *pFile;
	pFile = fopen("curritos.dat","r");
	 
	typedef struct employee TypeEmp;
	TypeEmp emp; 
	
	if (pFile == NULL) {
		printf("Error: The file could not be opened. \n");
		getchar();
	}else {
		while(fread(&emp, sizeof(emp), 1, pFile) == 1) { // fread() devuelve el n�mero de elementos leidos, si devuelve
			printf("\nInformation about the employee: \n\n\tCode: %i", emp.cod);//0 es que estamos en EOF.
			printf("\tLast name: %s", emp.lastN);
			printf("\tFirst name: %s", emp.firstN);
			printf("\tAge: %i", emp.age);
			printf("\tSalary: %.2f", emp.salary);
			printf("\n");			
		}
	}	
	
	fclose(pFile);
	return 0;
}
