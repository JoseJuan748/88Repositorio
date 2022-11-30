// 2022_10_24_006_Arreglos.cpp 
//Jose Juan Bañuelos Hernandez
//En este programa aprenderemos la sintaxys de los arreglos
//A recorrerlos y recolectar datos

#include <iostream>
#include <locale>

int main()
{
    /*
    //Tipo de dato; Nombre de la variable; [# de elemntos]
    int vec1[10];
    char vec2[50];
    bool vec3[60];
    std::string vec4[100];
    float vec5[2];
    double vec6[5];

    //Arreglos predefinidos
    std::string vec7[5] = { "Dato1", "Dato2", "Dato3", "Dato4", "Dato5" };
    int vec8[] = { 1,2,3,4,5,6,7,8,9 };

    std::cout << "El vector 7 en su posicion 3 tiene a: " << vec7[2] << std::endl;
    std::cout << "El vector 7 en su posicion 2 tiene a: " << vec7[1] << std::endl;

    vec7[0] = "Santiago";
    std::cout << "El vector 7 en su posicion 1 tiene a: " << vec7[0] << std::endl;

    //Metodo para recorrer todo el arreglo
    for (int i = 0; i < 5; i++)
    {
        std::cout << "El vector 7 tiene a: " << vec7[i] << " en la posicion " << i <<
            " y es eñ elemento: " << i + 1 << std::endl;
    }
    */

    std::string titulo[3];
    std::string autor[3];
    std::string edicion[3];
    bool libro;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Cual es el titulo del libro?" << i + 1 << std::endl;
        std::cin >> titulo[i];
    }
    for (int j = 0; j < 3; j++)
    {
        std::cout << "Quiene es el autor del libro?" << j + 1 << std::endl;
        std::cin >> autor[j];
    }
    for (int k = 0; k < 3; k++)
    {
        std::cout << "Cuales la fecha en que se publico?" << k + 1 << std::endl;
        std::cin >> edicion[k];
    }

    std::cout << "Quieres ver los datos de los libros? (1 si, 0 no)\n";
    std::cin >> libro;
    if (libro == 1)
    {
        //libro 1
        std::cout << "Titulo del libro 1 es: " << titulo[0] << std::endl;
        std::cout << "Autor del libro 1 es: " << autor[0] << std::endl;
        std::cout << "Fecha en la que se publico libro 1: " << edicion[0] << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;

        //libro 2
        std::cout << "Titulo del libro 2 es: " << titulo[1] << std::endl;
        std::cout << "Autor del libro 2 es: " << autor[1] << std::endl;
        std::cout << "Fecha en la que se publico libro 2: " << edicion[1] << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;

        // libro 3
        std::cout << "Titulo del libro 3 es: " << titulo[2] << std::endl;
        std::cout << "Autor del libro 3 es: " << autor[2] << std::endl;
        std::cout << "Fecha en la que se publico libro 3: " << edicion[2] << std::endl;
    }
    if (libro == 0)
    {
        std::cout << "Entendible, tenga un buen dia" << std::endl;
    }

}