#include <stdio.h>
#include <stdlib.h>

const char *archivo_listo = "archivo1.txt";
const char *archivo_copiado = "archivo2.txt";

int main(){

	FILE *archivolisto;
	FILE *archivocopiado;

	int caracter;

	archivolisto = fopen(archivo_listo, "r");
	if(archivolisto == NULL){
		fprintf(stderr, "No se pudo leer el %s\n",archivo_listo);
	return(8);
	}

	archivocopiado = fopen(archivo_copiado, "w+");
	if(archivocopiado == NULL){
		fprintf(stderr, "No se pudo abrir el %s para escribir los copiado\n", archivo_copiado);
		return(8);
	}

	while(1){
		caracter = fgetc(archivolisto);
		if(caracter == EOF){
		break;
		}
		if(caracter == '\t'){
			 fputc(' ', archivocopiado);
                	 fputc(' ', archivocopiado);
			 fputc(' ', archivocopiado);
                	 fputc(' ', archivocopiado);
		}else{
			 fputc(caracter, archivocopiado);
		}
	}

fclose(archivolisto);
fclose(archivocopiado);
	return 0;
}
