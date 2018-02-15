/*Invocacion de libreias*/
#include <stdio.h>
#include <stdbool.h>
#define CONSTANTE=100; /*Es una directiva del pre-procesador
Define un simbolo que va a buscar dentro del codigo y cuando lo encuentre lo sustituye por el valor
Existen modificadores para cada dato primitivo, lo que puede reducir, aumentar su tamaño o bien cambiar el rango*/
int m1 = 1;
//Las lineas de código se le llaman enunciados, al igual que los operadores; solo que el ultimo regresa un valor. 

/*
Todo operador que regrese un valor se le llama expresión. Ejemplo 5+6 regresa 11.
*/
/*El valor que regresa la función main se guarda en un archivo de historial en el Sistema Operativo*/
void main(){
    int local=20;
    float x=1.2,y=3.7,z=4.0;
    short int a;
    unsigned int b;
    long long int c;
    float d;
    double e;
    const int constante=100; /*Las variables constantes no se pueden modificar.*/
    _Bool booleano=false;

    int b1=015; /*El 0 a la izquierda indica que es base octal, mientras que 0b indica un valor binario*/
    int b2=0b101111; //Los valores binarios solo funcionan con el compilador gcc.
    int b3=0xABC123; //El 0x indica base hexadecimal.
    //Imprimir las diferentes bases convierten el numero a base 10. 

    local=a=100;
    printf("Local:%d | Otra:%d\n",local,a);
    printf("%d\n",booleano);
    booleano=true;
    printf("%d\n",booleano);
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
    printf("%d\n",sizeof(e));
    printf("%d Hola mundos! %d",local,m1);
}