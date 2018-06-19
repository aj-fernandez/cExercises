/*Construye el código de un programa que pida una cadena de caracteres por teclado y asigne a
 *otras dos cadenas el resultado de cortar la cadena introducida por la mitad. Finalmente,
 *imprimir la cadena entrante y ambas cadenas resultantes. (Dos versiones posibles: una sin
 *funciones específicas de cadena y una utilizándolas)
 *Nota: La cadena tecleada tendrá como máximo 20 caracteres.
 */

#include<stdio.h>
#include<string.h>
 
int main()
{
	char strSource [21]; // Pongo 21 para que fgets() no produzca stack overflow. 
	void splitStr(char *source);
	
    printf("Introduce un string de maximo 20 caracteres: ");
 	fgets(strSource, 21, stdin); //Esto realmente lee 20,yo dejo 1 más para el '\n' que fgets() mete.
	strtok(strSource, "\n"); //Con esto elimino el '\n', en caso de no hacerlo al querer calcular la longitud de la cadena contaría uno más.
	
	splitStr(strSource);
 
	return 0;
}
void splitStr(char *source)
{
	char splitOne[10];
	char splitTwo[10];
	int fullSize = (int)strlen(source);
	int i, chunkSize;
	
	i=0;
	chunkSize = fullSize / 2;
	while (i<=fullSize)
	{
    	if (i < chunkSize)
        	{	
				splitOne[i] = source[i];
				printf("rellenando splitOne\n"); //control
				 
			  }else{
					splitTwo[i-chunkSize] = source[i]; // i - chunkSize -> para que empiece a rellenar splitTwo desde su posición 0.
					printf("rellenando splitTwo\n"); //control
					}
		i++;	  	
	  }
	  
	  printf("El array splitOne es: %s\n",splitOne);
	  printf("El array splitTwo es: %s\n",splitTwo);
	
	return;	
}
