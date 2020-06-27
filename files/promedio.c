
#include <stdio.h>
#include <stdlib.h>

const char *lista_numeros = "lista_n.txt";
const char *promedio ="promedio.txt";

int main(){

        FILE *lista;
        FILE *prom;

        char line[100];
        float numero;
        float sum = 0;
        float resultado;

        lista = fopen(lista_numeros, "r");
        if(lista == NULL){
                fprintf(stderr, "Este %s no se puede abrir\n", lista_numeros);
        return(8);
        }

        prom=fopen(promedio, "w+");
        if(prom == NULL){
                fprintf(stderr, "Este %s no se puede abrir\n", promedio);
                fclose(lista);
        }

        while(feof(lista)==0){
                fscanf(lista,"%f", &numero);
             //   printf("%.2f\n", numero);
                sum=sum+numero;
        }
                resultado = sum/10;
        fprintf(prom,"El promedio es: %.2f\n", resultado);
        fclose(lista);
        fclose(prom);

return 0;
}

