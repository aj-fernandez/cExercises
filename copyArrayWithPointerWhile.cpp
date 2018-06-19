/* Program 3.1 from PTRTUT10.HTM 6/13/97 */
#include <stdio.h>
char strA[80] = "Cadena a usar para el programa de ejemplo que copia una cadena en otra";
char strB[80];
int main(void)
{
char *pA; /* un apuntador al tipo caracter */
char *pB; /* otro apuntador al tipo caracter */
puts(strA); /* muestra la cadena strA */
pA = strA; /* apunta pA a la cadena strA */
puts(pA); /* muestra a donde apunta pA */
pB = strB; /* apunta pB a la cadena strB */
printf("pB apunta a:");
puts(pB);
putchar('\n'); /* dejamos una línea en blanco */
while(*pA != '\0') /* linea A (ver texto) */
{
*pB++ = *pA++; /* linea B (ver texto) */
}
*pB = '\0'; /* linea C (ver texto) */
puts(strB); /* muestra strB en la pantalla */
return 0;
}
