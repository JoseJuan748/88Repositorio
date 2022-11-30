/*22_17_10_005_Ciclos_Anidados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
 Jose Juan Bañuelos Hernandez
 */

#include <iostream>
#include <string>

int main()
{
    std::string Color_CP1 = "Rubio";
    std::string Color_CP2 = "Pelirojo";
    std::string Color_Op1 = "Azules";
    std::string Color_Op2 = "Marrones";

    if (Color_CP1 == "Rubio")
    {
        std::cout << "Tu personaje tiene color de cabello Rubio" << std::endl;
        if (Color_Op1 == "Azules")
        {
            std::cout << "Tu personaje tiene los ojos de color azul" << std::endl;
                std::cout << "Tu personaje es Trump";
        }
    }
    

    int arreglo[3] = { 1,2,3 };
    int cajas[3][3] = { { 1,2,3 }, {4,5,6}, {7,8,9} };
    //Ciclo para mostrar el arreglo simple
    for (int i = 0; i < 3; i++)
    //Ciclo para mostrar la matriz 
    for (int j = 0; j < 3; j++)
    {
        std::cout << "Indice J: " << std::endl;
        for (int k = 0; k < 3; k++)
    }
}