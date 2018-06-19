/* Construye el código en lenguaje C de un programa que utilizando la estructura que se
 * detalla a continuación :
 * 
 *  1) Que almacene en una tabla la información correspondiente a la biblioteca.
 *  2) Que liste dicha información.
 * 
 * ESTAS ES LA ESTRUCTURA BASE: 
 *
 *  struct ficha
 *   {
 *  	unsigned numref;
 *  	char titulo[30];
 * 	    char autor[20];
 *  	char editorial[25];
 *  	enum clases libro_revista;
 * 
 * 	    union {
 * 		   struct {
 * 			    unsigned edicion;
 * 		    	unsigned anyo;
 * 	    	} libros;
 *  	char nomrev[30];
 *  	} lr;
 *  };
 *
 */
 
 
