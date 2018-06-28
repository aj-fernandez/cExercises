/* Construye el código en lenguaje C de un programa que rellene de forma secuencial un
 * fichero que se llamará CURRITOS.DAT y cuyos campos serán :
 *
 * Código : 2 posiciones enteras.
 * Apellidos : 25 posiciones carácter.
 * Nombre : 15 posiciones carácter.
 * Edad : 3 posiciones enteras
 * Sueldo : 7 posiciones numéricas con decimales (5 enteros y 2 decimales).
 * Nota : Con rellenar 10 como máximo vale.
 *
 * Cada ejecución, grabando 2 estructuras generan 208 bytes en el fichero, comprobar si en los char[] toma el \0 y ahorra
 * las posiciones no usadas, aunque supongo que si. (208 bytes tanto en modo binario como texto).
 * COMPROBADO: Independientemente de la longitud de los datos introducidos cada escritura de 1 estructura
 * son 104 bytes, por lo que sizeof(emp) = 104 bytes en su conjunto. 
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
	int i, maxEmp;
	
	FILE *pFile;
	pFile = fopen("curritos.dat","wb");
	
	printf("How many employees do you want to enter?");
	scanf("%i", &maxEmp);
	 
	typedef struct employee TypeEmp;
	TypeEmp emp[maxEmp], *pEmp;
	pEmp = emp;
	
	if (pFile == NULL) {
		printf("Error: The file could not be opened. \n");
		getchar();
	}else {
		for (i=0; i<maxEmp; i++) {
			printf("Fill in the information about the employees: \n\n\tInsert code: ");
			scanf("%u",&emp[i].cod);
			fflush(stdin);
			printf("\tInsert the last name: ");
			gets(emp[i].lastN);
			printf("\tInsert the first name: ");
			gets(emp[i].firstN);
			printf("\tInsert age: ");
			scanf("%i",&emp[i].age);
			fflush(stdin);
			printf("\tInsert salary: ");
			scanf("%f",&emp[i].salary);
			fflush(stdin);
			printf("\n");		
			}
		fwrite(emp, sizeof(emp), 1, pFile); // Al contrario de la versión en la que usaba estructuras
		//como tal y no arrays de estructuras como ahora, el fwrite() debe realizarse una vez relleno
		//el array, es decir, al terminar el ciclo 'for'. 'emp' hace referencia al array completo por
		//lo que en una sola llamada a fwrite lo copia todo.
	}
	
	fclose(pFile);
	return 0;
}


/*	for (i=0; i<MAX_EMP; i++) {
		printf("\n\nEmployee code: %i",emp[i].cod);
		printf("\tLast name: %s", emp[i].lastN);
		printf("\tFirst name: %s", emp[i].firstN);
		printf("\tAge: %i", emp[i].age);
		printf("\tSalary: %.2f", emp[i].salary);
		printf("\n");
	}*/
