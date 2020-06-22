/* En este programa se ingresa el numero que quieras por la consola y cuando se imprima se ira 
ingrementando en 2 en dos */

#include <stdio.h>
#include <stdlib.h>

int leerCantidad() {
    int cantidad;
    printf("Cuantos numeros va a ingresas ?: ");
    scanf("%i", &cantidad);
    return cantidad;
}

void leer(int cantidad, int *numeros) {
    int i = 0;
    for (;i < cantidad; i++) {
        printf("Ingrese el numero: \n");
        scanf("%i", &numeros[i]);
    }
}

void imprimir(int cantidad, int *numeros) {
    int i = 0;
    for (;i < cantidad; i++) {
        printf("Sus numeros son: %i \n", numeros[i] + 2);
    }
}
int main(void) {
    int cantidad = leerCantidad();
    int* numeros = malloc(cantidad * sizeof(int)); //espacio de memoria de cada elemento

    leer(cantidad, numeros);
    imprimir(cantidad, numeros);

    free(numeros); //libera la memoria
    return 0;
}
