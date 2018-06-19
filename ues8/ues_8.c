/* Construye el c�digo en lenguaje C de un programa que utilizando la estructura que se
 * detalla a continuaci�n :
 * 
 *  1) Que almacene en una tabla la informaci�n correspondiente a la biblioteca.
 *  2) Que liste dicha informaci�n.
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
 
 
