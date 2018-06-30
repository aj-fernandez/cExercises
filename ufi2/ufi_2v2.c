/* Construye el código en lenguaje C de un programa que cuente el número de registros
 * que tiene el fichero CURRITOS.DAT. Al final deberá imprimirse en pantalla ese número
 * calculado y también la media de edad de los trabajadores, así como la suma de los sueldos de
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
	int i = 0, avg = 0, sumAge = 0;
	double add = 0;
	
	FILE *pFile;
	pFile = fopen("curritos.dat","rb");
	 
	typedef struct employee TypeEmp;
	TypeEmp emp;
	
	if (pFile == NULL) {
		printf("Error: The file could not be opened. \n");
		getchar();
	}else {
		while (fread(&emp, sizeof(emp), 1, pFile) == 1) {
			printf("\nInformation about the employees: \n\n\tCode: %i", emp.cod);
			printf("\tLast name: %s", emp.lastN);
			printf("\tFirst name: %s", emp.firstN);
			printf("\tAge: %i", emp.age);
			printf("\tSalary: %.2f", emp.salary);
			printf("\n");
			add = add + emp.salary;
			sumAge = sumAge + emp.age;
			i++;	
		}
	}
	
	avg = sumAge/i;
	
	printf("\n\nNumber of records with size '%i' bytes per record is: %i\n",sizeof(emp),i);
	
	printf("The average age of the employees is: %i\n", avg);	
	
	printf("The sum of salary of the employees is: %.2f", add);
	
	fclose(pFile);
	return 0;
}
