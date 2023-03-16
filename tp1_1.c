#include <stdio.h>
#include <stdlib.h>

void main()
{
    int valor, *punt;
    valor=10;
    punt=&valor;
    printf("Hola mundo\n");
    printf("1- La direccion de memoria almacenada por el puntero es %p\n", punt);
    printf("2- La direccion de memoria de la variable es %p\n", &valor);
    printf("3- La direccion de memoria del puntero es %p\n", &punt);
    printf("4- El tamano de memoria utilizada por el puntero es %d\n", sizeof(punt));
    printf("5- El contenido del puntero es %d\n", *punt);
}