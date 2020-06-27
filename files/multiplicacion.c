
#include <stdio.h>
#include <stdlib.h>

const char *listas_multi = "multiplicar.txt";
const char *multiplicado = "multiplicado.txt";

int main(){

        FILE *listas;
        FILE *mult;

        int primero;
        int segundo;
        int m;
        listas= fopen(listas_multi, "r");
        if(listas == NULL){
                fprintf(stderr, "Este %s no se puede abrir\n", listas_multi);
        return(8);
        }

        mult= fopen(multiplicado, "w+");
        if(mult == NULL){
                fprintf(stderr, "Este %s no se puede abrir\n", multiplicado);
        return(8);
        }

        while(feof(listas)==0){
                fscanf(listas,"%d %d", &primero, &segundo);
                        m=primero * segundo;
                fprintf(mult,"%d\n", m);
        }
        fclose(listas);
        fclose(mult);
return 0;
}


