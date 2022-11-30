// 24_10_2022_Arreglos predefinidos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Arreglos
// Jose Juan Bañuelos Hernandez


#include <iostream>

int main()
{
    //Tipo de nombre de dato; Nombre de la variable;¨[# de elementos]

    int vec1[10];
    char vec2[50];
    bool vec3[60];
    std::string vec4[100];
    float vec5[2];
    double vec6[5];

    //Arreglos predefinido

    std::string vec7[5] = { "Dato1", "Dato2", "Dato3", "Dato4", "Dato5" };
    int vec8[] = {1,2,3,4,5,6,7,8,9};

    std::cout << "El vector 7 en su posicion 3 tiene a: " << vec7[2] << std::endl;
    std::cout << "El vector 7 en su posicion 2 tiene a: " << vec7[1] << std::endl;

    vec7[0] = "Santiago";
    std::cout << "El vector 7 en su posicion 1 tiene a:" << vec7[0] << std::endl;

    //Metodo para recorrer todo el arreglo

    for (int i = 0; i < 5; i++)
    {
        std::cout << "El vector 7 tiene a:" << vec7[i] << " en la posicion " << i <<
        " y es el elemnto: " << i + 1 << std::endl;
    }
}
