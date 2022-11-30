// 02_11_2022_Punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez

#include <iostream> //Controla entradas y salidas
#include <locale> //Nos ayuda a interpretar idiomas
#include <stdlib.h> //Nos protege de bucles infinitos
#include <cstdlib> //Libreria de C para entradas y salidas o control del sistema
#include <Windows.h> //Funciones de control de programa mediante pausas y dormidas



int main()
{
    //Declaración de un puntero.
    int edad = 0;
    int* apuntador = &edad;
    std::cout << "Valor de la variable edad: " << edad << std::endl;
    *apuntador = 20;
    std::cout << "Valor de la variable edad: " << edad << std::endl;
    std::cout << "Dirección de memoria del puntero: " << apuntador << std::endl;
    std::cout << "Valor del apuntador: " << *apuntador << std::endl;
    std::cout << "Dirección de memoria de la edad: " << &edad << std::endl;

    system("pause");
    apuntador = NULL;

}