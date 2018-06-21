/* Construye el código en lenguaje C de un programa que utilizando la estructura que se
 * detalla a continuación :
 * 
 *  1) Que almacene en una tabla la información correspondiente a la biblioteca.
 *  2) Que liste dicha información.
 *
 * Para ello, deberá implementarse una función principal que invoque a dos 
 * funciones, una que lea datos sobre la estructura y otra que visualice 
 * los datos de la tabla.
 * 
 * Cada vez que se visualice un libro o revista se mostrará un mensaje que diga
 * “pulse la tecla <Entrar> para continuar” de forma que al pulsar la <Entrar> se limpie la
 * pantalla y se visualice el siguiente elemento de la tabla.
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_TOKENS 2

enum clases {libro, revista};  // automáticamente se asigna: libro = 0, revista = 1.

struct token
{
	unsigned numref;
  	char titulo[30];
	char autor[20];
  	char editorial[25];
  	enum clases libro_revista;
  	union 
	{
 		struct 
		{
 		    unsigned edicion;
 	    	unsigned anyo;
 	    }libros;
  		char nomrev[30];
  	} lr;
};

typedef struct token TypeToken;

int createToken(struct token bibli[], int i)
{
	int addedToken = 0;
	
	while (addedToken<MAX_TOKENS) {
		printf("Numero de referencia: ");
		scanf("%i",&bibli[addedToken].numref);
		fflush(stdin);
		printf("Titulo: ");
		gets(bibli[addedToken].titulo);
		printf("Autor: ");
		gets(bibli[addedToken].autor);
		printf("Editorial: ");
		gets(bibli[addedToken].editorial);
		printf("Es un libro(0) o revista(1)?: ");
		scanf("%i", &bibli[addedToken].libro_revista);
		fflush(stdin);
	
		switch (bibli[addedToken].libro_revista) { // antes usaba una variable opt, pero así ahorramos memoria.
		
			case 0:
				bibli[addedToken].libro_revista = libro;
				printf("Edicion: ");
				scanf("%i",&bibli[addedToken].lr.libros.edicion);
				fflush(stdin);
				printf("Anyo publicacion: ");
				scanf("%i",&bibli[addedToken].lr.libros.anyo);
				fflush(stdin);
				break;
	
			case 1:
				bibli[addedToken].libro_revista = revista;
				printf("Nombre de la revista: ");
				gets(bibli[addedToken].lr.nomrev);
		}
		
		addedToken++;
	}
	
	return addedToken;
}

void showToken(struct token bibli[], int i)
{
	int j = 0;
	
	system("cls");
	printf("Estos son los libros/revistas almacenados:\n");
	
	while (j<i) {
		printf("Numero de referencia: %i\n", bibli[j].numref);
		printf("Titulo: %s\n", bibli[j].titulo);
		printf("Autor: %s\n", bibli[j].autor);
		printf("Editorial: %s\n", bibli[j].editorial);
		if (bibli[j].libro_revista == libro) { // 'libro' podría sustituirlo por '0'.
			printf("Edicion del libro: %i\n", bibli[j].lr.libros.edicion);
			printf("Fecha de publicacion: %i\n", bibli[j].lr.libros.anyo);
		}else if (bibli[j].libro_revista == revista) { // 'revista' podría sustituirlo por '1'.
			printf("Nombre de la revista: %s\n", bibli[j].lr.nomrev);
		}
		
		j++;
		getchar();
		system("cls");
	}
	
	return;
}
 
int main()
{
	int tokens;
	TypeToken bibli[MAX_TOKENS];
	
	printf("Bienvenido a nuestro almacen de lecturas.\nComencemos introduciendo libros o revistas.\n");
	
	tokens = createToken(bibli, MAX_TOKENS);
	
	showToken(bibli, tokens);

	return 0;
}
 
 
