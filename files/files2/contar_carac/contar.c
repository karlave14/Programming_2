
#include<stdio.h>
#include<stdlib.h>

const char *archivo_text ="text.txt";

int main(){

	FILE *text; //puntero del texto
	char ch; //declaro mi varible de caracteres
	int palabras =1;
	int carac=1;

	text=fopen(archivo_text,"r");
	if(text==NULL){
		fprintf(stderr,"Este %s no se puede abrir\n",archivo_text);
	return(8);
	}else{
		ch=fgetc(text);
	// printf("El contenido de el archivo %s\n",text);
	while(ch !=EOF){
		printf("%c",ch);
		if(ch==' '|| ch=='\n'){
	palabras++;
	}else{
		carac++;
	}
	ch=fgetc(text);
	}
	printf("El numero de palabrad son %d\n",palabras-2);
	printf("El numero de caracteres es %d\n,", carac);
	}
fclose(text);
return 0;

}
