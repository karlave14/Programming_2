/*copiar un archivo a otro https://codeforwin.org/2018/02/c-program-to-copy-file.html*/
#include<stdio.h>
#include<stdlib.h>

const char *file_lec = "lectura.txt";
const char *copy_file = "copy.txt";

int main(){

	FILE *lec; //apuntar archivos
	FILE *esc;

	int ch;

	lec = fopen(file_lec,"r"); // abrir y leer
	if(lec == NULL){
		fprintf(stderr,"Este %s no se puede abrir\n", file_lec);
	return(8);
	}

	esc=fopen(copy_file,"w+"); // abrir y escribir
	if(esc == NULL){
		fprintf(stderr,"Este %s no se puede abrir\n",copy_file);
	fclose(lec);
	return(8);
	}
	ch = fgetc(lec);//optenemos el texto que vamos a pegar
	while(ch != EOF){
	fputc(ch,esc); //pegamos el texto en el otro archivo
	ch=fgetc(lec);
	}
	printf("\n Cheque el otro archivo\n"); //avisamos que ya a sido copiado

	fclose(lec);
	fclose(esc);
return 0;
}
