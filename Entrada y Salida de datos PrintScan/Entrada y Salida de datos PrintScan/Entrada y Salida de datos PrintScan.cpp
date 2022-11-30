// Entrada y Salida de datos PrintScan.cpp 
//Jose juan Bañuelos Hernadez

#include <stdio.h>
#include <iostream>
#include <string>

int main()
{
    //declaracion de variables
    int num;
    std::string nombre;
    float peso;
    char genero;
    double altura;

    //formulario de registro, se ingresan los datos y se imprimen en una confirmacion
    printf("Bienvenido\n");
    printf("Ingresar los siguientes datos para su registro\n"); \

    printf("Introduce nombre\n");
    std::getline(std::cin, nombre);
    //scanf("%s", &nombre);

    printf("Introduce genero H para hombre M para mujer");
    scanf("%c", &genero);

    printf("Introduce tu edad\n");
    scanf("%i", &num);

    printf("Introduce tu peso\n");
    scanf("%f", &peso);

    printf("Introduce altura\n");
    scanf("%d", &altura);
    
    //confirmacion
    printf("\nhola: %s\n", nombre);
    printf("genero: %c\n", genero);
    printf("edad: %i\n", num);
    printf("peso: %f\n", peso);
    printf("altura:%d\n", altura);
    printf("Presiona Enter pasa Salir");
}

