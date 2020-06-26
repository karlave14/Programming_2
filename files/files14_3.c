#include <stdio.h>
#include <stdlib.h>

const char *archivo_original = "numeros.txt";
const char *archivo_salida = "numerosSin3.txt";
const char *archivo_listo = "divisibles3.txt";

int main(){

	FILE *original;
	FILE *cambio;
	FILE *listo;

	char line[100];
	int numero;

	original = fopen(archivo_original, "r");
	if(original == NULL){
		fprintf(stderr, "Este %s no se se puede abir\n",archivo_original);
		return(8);
	}

	cambio=fopen(archivo_salida, "w+");
	if(cambio== NULL){
		fprintf(stderr,"Este %s no se puede abrir\n", archivo_salida);
		fclose(original);
		return(8);
	}

	listo = fopen(archivo_listo, "w+");
	if(listo==NULL){
		fprintf(stderr,"Este %s no se puede abrir\n", archivo_listo);
		fclose(original);
		fclose(cambio);
	return(8);
	}

	while(fgets(line,sizeof(line),original)){
		sscanf(line,"%d", &numero);
		if((numero % 3)==0){
			fprintf(listo, "%d\n", numero);
		}else{
		fprintf(cambio,"%d\n", numero);
		}
	}

	fclose(original);
	fclose(cambio);
	fclose(listo);

return 0;
}
