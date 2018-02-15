#include <stdio.h>
#include <stdlib.h>
/*Incluye 2 constantes EXIT_SUCCESS y EXIT_FAILURE*/

int main(){

    int sum=17, cuenta=5;
    double media;

    media=(double)sum/(double)cuenta; /*Se le llama cast a la parte de (double) que nos ayuda a convertir de un tipo de dato a oto*/
    printf("El valor de la media es: %f\n\n",media);

    char c = 127;
    short s = 425;

    printf("%d Tamanio:%d\n",c,sizeof(c));
    printf("%d Tamanio:%d\n",c,sizeof(s));
    c=s;
    printf("Nuevo valor: %d",c);
    
    return EXIT_SUCCESS;
}

/*Los valores en c si son ingresados como 2.0 los toma automáticamente como double, a menos que se indice como
2.0f y en los enteros ocurre de manera contraria, si se guarda como 5 será int se tiene que guardar como 5 l 
para que se vuelva long*/