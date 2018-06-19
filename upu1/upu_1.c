/*Construye el código en lenguaje C de un programa que efectúe las siguientes operaciones:
a) Declara las variables para números enteros largos valor1 y valor2, inicializando valor1 a 200000
b) Declara la variable ptrln como puntero a una variable de tipo long.
c) Asigna la dirección de la variable valor1 a la variable ptrln.
d) Imprime el valor de la variable apuntada por ptrln.
e) Asigna a la variable valor2 el valor de la variable apuntada por ptrln.
f) Imprime el valor de valor2.
g) Imprime la dirección de valor1.
h) Imprime la dirección almacenada en ptrln. ¿Es igual el valor impreso que la dirección de valor1?*/


#include <stdio.h>
int main()
{
	long valor1 = 200000, valor2;
	long *ptrln;
	ptrln = &valor1;
	printf("El contenido de la variable apuntada por PTRLN es: %li\n",*ptrln);
	valor2 = *ptrln;
	printf("El contenido de valor2 es: %li\n",valor2);
	printf("La direccion de memoria de valor1 es: %p\n",valor1); /*Con %p especificamos el tipo de dato de un puntero, es decir, una dirección de memoria
																NOTA: podemos usar %x o %X en lugar de %p como código de formato para el printf() 
																y nos mostrará la dirección de memoria en formato hexadecimal obviando los ceros 
																a la izquierda*/
	printf("La direccion de memoria almacenada en PTRLN es: %p\n",*ptrln);/*El truco para que funcione y muestre la direccion de memoria almacenada en PTRLN
																			es el asterisco antes de ptrln, al ponerlo, nos mostrará el contenido de dicho puntero
																			que debe concondar con la dirección de memoria de valor1, en caso de no poner el 
																			asterisco nos devolvería la dirección de memoria del propio puntero PTRLN
																			BÁSICAMENTE EL ASTERÍSCO INDICA QUE QUEREMOS EL CONTENIDO DEL PUNTERO*/																		
	return 0;
}
/*el tipo de dato int puede ser de 2 o 4 bytes, con solo 2 bytes 200.000 (el valor de la variable valor1) se truncaría o daría error, por lo que
parece que automáticamente el compilador lo toma como int de 4 bytes, después en el printf() cuando vamos a mostrar el valor de valor1 haciendo uso del puntero
ptrln usamos el código de formato %i (integer), podemos ponerle precediendo a la "i" una "h" o una "l" si queremos especificar códigos de tipo de datos corto o 
largo respectivamente, en caso de poner solo %i, parece que lo toma como integer de 4 bytes y muestra 200.000, inluso si queremos ser más específicos 
y usamos %li sigue mostrando 200.000, pero si usamos %hi, estamos diciendo que es int corto, entiendo que de 2 bytes, y muestra 3.392, por 
lo que supongo que cuando llega al número máximo capaz de mostrar itera sobre el rango hasta llegar a 200.000
*/
