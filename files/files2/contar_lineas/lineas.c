/* Contar las lineas de un texto */

#include<stdio.h>
#include<stdlib.h>

const char *texto_list = "text.txt";
const char *texto = "text2.txt";
int main(){

	FILE *text;
	FILE *t;
	int contador;
	char str[100];
	char str1;
	int numero;
	printf("Infresa el numero de lineas que quieres: \n");
	scanf("%d", &numero); 	// se pide el numero de lineas

	text=fopen(texto_list,"r");// se abre en forma lectura
	if(text==NULL){
		fprintf(stderr,"Este archivo %s no se puede abrir\n", texto_list);
	}
	t=fopen(texto,"w+"); // se escribe
	if(t==NULL){
		fprintf(stderr,"Este archivo %s no se puede abrir\n", texto);
	}
	for(int i=0;i< numero+1; i++){ // se escribe las lineas
	fgets(str,sizeof str,stdin);
        fputs(str,text);
	}
//fclose(text);

	printf("El contenido de esta %s es: \n", str);
		str1= fgetc(text);
	while(str1 != EOF){
	printf("%c",str1);
	str1 =fgetc(text);
	}
	fprintf(t,"%s",str);
fclose(text);

return 0;
}
