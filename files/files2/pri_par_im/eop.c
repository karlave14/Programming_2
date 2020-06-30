#include <stdio.h>
#include <stdlib.h>

const char *lista_o = "num.txt";
const char *lista_p = "par.txt";
const char *lista_im = "impar.txt";
const char *lista_pr = "primo.txt";


int main(){

        FILE *original; // puntero de cada archivo
        FILE *par;
        FILE *impar;
        FILE *primo;

        int numero; // declaro mis variables a utilizar

        original = fopen(lista_o,"r");  // abrir mis archivos
        if(original == NULL){
        fprintf(stderr,"Este %s no se puede abrir", lista_o);
        return(8);
        }

        par = fopen(lista_p,"w+");
        if(par == NULL){                                                                                                                                                                             fprintf(stderr,"Este %s no se puede abrir", lista_p);                                                                                                                                        return(8);                                                                                                                                                                                   }

        impar = fopen(lista_im,"w+");
        if(impar == NULL){
        fprintf(stderr,"Este %s no se puede abrir", lista_im);
        return(8);
        }

        primo = fopen(lista_pr,"w+");
        if(primo == NULL){
        fprintf(stderr,"Este %s no se puede abrir", lista_pr);
        fclose(original);
        return(8);
        }

        while(feof(original)==0){   // empiezo con la comparacion para verificar cada valor
        fscanf(original,"%d\n",&numero);
	        if(numero%2==0){
                fprintf(par,"%d\n",numero);
                        for(int i=2; i<numero/2; i++){
                                if(numero %i ==0){
                                        fprintf(primo, "%d\n", numero);
                                }
                        }
        }else{
                fprintf(impar,"%d\n",numero);

        }

        }
        fclose(original); //cierro archivos
        fclose(primo);
        fclose(par);
        fclose(impar);

return 0;
}

