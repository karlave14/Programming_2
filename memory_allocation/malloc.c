/*   https://www.w3resource.com/c-programming-exercises/pointer/c-pointer-exercise-9.php*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont;
    int numero_ele;
    int *element;
        printf(" Encuentra el numero mayor:\n");
    printf(" Ingresa el numero total de elementos de rango del 1 to 100 ");
    scanf("%d",&numero_ele);
    element=(int*)malloc(numero_ele*sizeof(int));  // alocacion de memoria para 'n' *elements*
    if(element==NULL) //verificar que hay memoria
    {
        printf(" No hay espacio en la memoria");
        exit(0);
    }else {
    printf("\n");
    for(cont=0;cont<numero_ele; cont++)
    {
       printf(" Number %d: ",cont+1);
       scanf("%d",element+cont);
    }
    for(cont=1;cont<numero_ele; cont ++)
    {
       if(*element<*(element+cont))
        *element=*(element+cont);
    }
    }
   // free(element);
    printf(" El elemento mayor es :  %d  \n\n",*element);
   free(element); //liberar el espacio de mamoria 
 return 0;
}

