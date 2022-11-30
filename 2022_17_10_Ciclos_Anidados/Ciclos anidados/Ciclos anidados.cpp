// 2022_17_10_Ciclos_Anidados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez

#include <iostream>

int main()
{
    //Contador
    int arreglo[2] = { 1,2 };
    int contador[2][11] = { { 0,1,2,3,4,5,6,7,8,9,10 },
                            { 0,1,2,3,4,5,6,7,8,9,10 } };
    for (int j = 0; j < 2; j++)
    {
        std::cout << " Numero interno: " << j << std::endl;
        for (int k = 0; k < 10; k++)
        {
            std::cout << " numero externo: " << k << std::endl;
            std::cout << " la posicion ( " << j << "," << k << " ) cuenta " << contador[j][k] << std::endl;
        }
    }
}
