
/* realloc cambia el tamaño del objeto al que apunta p y lo hace de tamaño size. El
contenido de la memoria no cambiará en las posiciones ya ocupadas. Si el nuevo
tamaño es mayor que el antiguo, no se inicializan a ningún valor las nuevas
posiciones. En el caso en que no hubiese suficiente memoria para “realojar” al nuevo
puntero, se devuelve NULL y p no varía.
El puntero que se pasa como argumento ha de ser NULL o bien un puntero devuelto
por malloc(), calloc() o realloc() */

#include <stdlib.h>
#include <stdio.h>
#define N 10
int main(){
char c;
char *cambiante;
int i;
i=0;
cambiante = NULL;
printf("\nIntroduce una frase\n");
while ((c=getchar()) != '\n') { // cuando la frase sea diferente a l espacio
 if (i % N == 0){
 printf("\nLlego a %d posiciones y pido hasta %d", i, i+N);
 cambiante=(char *)realloc((char *)cambiante,(i+N)*sizeof(char));
 if (cambiante == NULL) exit(-1);
 }
 /* Ya existe suficiente memoria para el siguiente carácter*/
 cambiante[i++] = c;                                                                                                                                                                                                /* Antes de poner el terminador nulo hay que asegurarse de que haya suficiente                                                                                                                                    memoria */                                                                                                                                                                                                         if ((i % N == 0) && (i != 0)){
// printf("\nLlego a %d posiciones x2 y pido hasta %d", i, i+N);
 cambiante=realloc((char *) cambiante, (i+N)*sizeof(char));
 if (cambiante == NULL) exit(-1);
 }
cambiante[i]=0;
printf ("\nHe leido %s", cambiante);
}
 return 0;
}
/*   https://www2.infor.uva.es/~belar/Ampliacion/Practicas%20C/2.%20Punteros/Asignacion_Dinamica_Memoria_C_Transparencias.pdf*/


