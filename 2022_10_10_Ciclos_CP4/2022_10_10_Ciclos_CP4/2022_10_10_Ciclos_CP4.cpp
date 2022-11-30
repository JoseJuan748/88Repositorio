// 2022_10_10_Ciclos_CP4.cpp  
// Jose Juan Bañuelos Hernandez
// Ciclos while Do-while For

#include <iostream>
#include<chrono>
#include<windows.h>

int main()
{
    bool seguir = true;
    int contador = 0;
    //lo peor que pueden usar es el while porque se cometen muchos errores
    while (seguir) {


        std::cout << "# " << contador << std::endl;
        contador = contador + 1;
        Sleep(1000);


        if (contador == 100)
        {
            seguir = false;
        }
    }
}
