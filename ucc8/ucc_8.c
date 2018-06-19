/* Construye el código de un programa que desarrolle una función que reciba como parámetro de
 * entrada una cadena de caracteres que representa el nombre de una entidad, y devuelva como
 * resultado, en otra cadena, el acrónimo de la misma.
 * 
 *                          Organización Naciones Unidas = O.N.U.
 */
 
#include <stdio.h>
#include <string.h>

char* newAcro(char *source, char *nAcro) //Antes devolvia un puntero a una array string local lo que me regalaba
										 //un enorme warning del compilador por pasar una direccion de memoria
										 //a otra función que al desaparecer esta podria corromperse, lo soluciono
										 //creando el array en el main y pasando a esta un puntero para que trabaje
										 //en la memoria original.
{
	int i,k;
	static int j = 2; //Tengo que usar 'static' para poder saber cual es la última posición y añadir el fin de cadena.
	
	nAcro[0] = source[0];
	nAcro[1] = 46;
	for (i=1; i<strlen(source);i++) { 
		if (source[i] == ' ') {
			nAcro[j] = source[i+1];
			nAcro[j+1] = 46; 
			j += 2;
		}
	}
	
	printf("La longitud de nAcron es: %i\n",strlen(nAcro));
	
	nAcro[j] = '\0'; //En caso de no añadirlo cuando intente leerlo como string fallará, leería hasta nAcro[10]
					   //Tuve problemas porque ponia 'j+1' pensando que si no lo hacia sobrescribiria la última
					   //posición, pero he de tener en cuenta que después de grabar el valor en la última posición
					   //'j' es incrementada.
					   
	printf("La longitud de nAcron despues de ponerle fin de string: %i\n",strlen(nAcro));
	
	for (i=0; i<strlen(nAcro); i++) { //Paso a mayúsculas, siempre y cuando no sea un punto!!.
		if (nAcro[i] != 46) {
			nAcro[i] = nAcro[i] - 32;
		}
		
	}
	printf("La longitud de nAcron despues de pasar a mayusculas: %i\n",strlen(nAcro));

	for (k=0; k<strlen(nAcro)+1; k++) {
		printf("la posicion [%i] es: %c\n",k,nAcro[k]);
	}
	
	
	return nAcro;
}

int main()
{
	char name[40];
	char *myAcro;
	char acro[15];

	
	printf("Escriba el nombre de su organizacion: ");
	gets(name);
	
	myAcro = newAcro(name,acro);
	
 	printf("El acronimo es: %s\n",myAcro);
	
	return 0;
}

