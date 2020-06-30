/* Programa para buscar la fecuencia de una palabra dentro de un texto
https://codeforwin.org/2018/02/c-program-to-copy-file.html */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MEDIDA 1000

const char *texto = "text.txt";
const char *palabra = "palabra.txt";
//int contador_veces(FILE *texto);

int main(){

	FILE *tex;
	FILE *pal;

	int recorrer;
	char palabra[100];
	int cont;

	printf("Escribe la palabra que quieres buscar: \n");
	scanf("%s ",palabra);

	tex=fopen(texto,"r");
	if(tex==NULL){
		fprintf(stderr," Este archivo llamado %s no se puede abrir", texto);
	return(8);
	}

	pal=fopen(palabra,"w+");
	if(pal==NULL){
                fprintf(stderr," Este archivo llamado %s no se puede abrir", palabra);
	return(8);
	}

	count = contador_veces(tex,palabra);
	fprintf(pal,"'%s' las veces son %d \n", palabra, recorrer);
	fclose(tex);
	fclose(pal);

return 0;
}

int contador_veces(FILE *tex, const char *texto){
	char str[MEDIDA];
	char *pasar;
	int index;
	int i=0;
	while((fgets(str,MEDIDA,tex)) !=NULL)
	{
		index =0;
		while((pasar = strstr(str+index,palabra)) !=NULL){
		index=(pasar - str)+1;
		i++;
		}
	}
return i;

}

