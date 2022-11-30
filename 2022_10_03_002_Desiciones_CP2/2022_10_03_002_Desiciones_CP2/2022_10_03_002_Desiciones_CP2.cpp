// 2022_10_03_002_Desiciones_CP2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez
// Conoceremos las decisiones en programación

#include <iostream>
#include <string>
#include <locale.h>
#include <locale>
int main()
{
    setlocale(LC_ALL, "spanish");
    bool Bandera = false;
    int cont = 0;
    std::string nombre = "Jose Juan";
    std::string n_ingresado = "";
    std::string contra = "Siu";
    std::string c_ingresada = "";
    std::cout << "sistema: " << Bandera << std::endl;
    std::cout << "Hola Usuario ingresa tu nombre: " << std::endl;
    std::getline(std::cin, n_ingresado);
    if (nombre == n_ingresado)
    {
        std::cout << "Nombre ingresado correcto" << std::endl;
        cont = cont + 1;
    }
    else
    {
        std::cout << "Nombre ingresado incorrecto " << std::endl;
    }
    std::cout << "Ingresa tu Contraseña: " << std::endl;
    std::getline(std::cin, c_ingresada);
    if (contra == c_ingresada)
    {
        std::cout << "Contraseña Correcta" << std::endl;
        cont = cont + 1;
    }
    if (cont < 2)
    {
        std::cout << "Datos ingresados incorrectos" << std::endl;
    }
    if (cont == 2)
    {
        Bandera = true;
    }
    std::cout << "El estado del sistema es: " << Bandera;
}