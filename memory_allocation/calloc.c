
#include <stdlib.h>
#include <stdio.h>


int main(){
char uno[20], *dos;
char tres[20], *cuatro;
printf ("\nDame una cadena:");
  gets(uno);
copia3(uno, &dos);
printf ("\nLa copia de %s\n es %s\n", uno, dos);
printf ("\nDame otra cadena:");
gets(tres);
copia4(tres, &cuatro);
printf ("\nLa copia de %s\n es %s\n", tres, cuatro);
}
/*Utilizo un índice para recorrer *p y cambiar **p sin modificar *p */
copia3 (char *s, char **p) {
 int i;
 *p = (char *) calloc (strlen(s)+1, sizeof(char));
 i=0;
 while (*s) (*p)[i++] = *s++;
 (*p)[i] = 0;
}
/*Utilizo el índice, pero accedo mediante *(*p + i) en vez de (*p)[i] */
copia4 (char *s, char **p)                                                                                                                                                                                         {                                                                                                                                                                                                                   int i;                                                                                                                                                                                                             *p = (char *) calloc (strlen(s)+1, sizeof(char));
 i=0;
 while(*s) {
 *(*p + i) = *s++;
 i++;
 }
 *(*p + i)= 0;
}

/*   https://www2.infor.uva.es/~belar/Ampliacion/Practicas%20C/2.%20Punteros/Asignacion_Dinamica_Memoria_C_Transparencias.pdf*/





