#include <stdio.h>

//definición de constante- constante simbolica 
#define ENTERA 10
#define CARACTER 'A'
#define FLOTANTE 1.1
#define FLOTANTE2 678.9876
#define FLOTANTE3 0.3E6
#define FLOTANTE4 0.3E-6
#define CADENA "ESCTRUCTURA DE DATOS"

int main()
{
    printf("%d\n", ENTERA);
    printf("%c\n", CARACTER);
    printf("%f\n", FLOTANTE);
    printf("%f\n", FLOTANTE2);
    printf("%f\n", FLOTANTE3);
    printf("%f\n", FLOTANTE4);
    printf("%s\n", CADENA);
    printf("%c\n", CADENA);

    return 0;
}