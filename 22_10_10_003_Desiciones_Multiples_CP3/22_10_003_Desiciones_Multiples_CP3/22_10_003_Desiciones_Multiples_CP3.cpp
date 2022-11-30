// 22_10_10_003_Desiciones_Multiples_CP3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Jose Juan Bañuelos Hernandez 
//En este programa aprendemos switch case

#include <iostream>
#include <string>
#include <cmath>

int main()
{
    float suma, a, b, c, d, division, resta, multiplicacion;
    float num;
    double raizCuadrada;
    int x = 0;

    std::cout << "Bienvenido a la calculadora:" << std::endl;

    int opc = 0;
    std::cout << "Buenas, que te gustaria hacer hoy?" << std::endl;
    std::cout << "La opcion 0 no hace nada" << std::endl;
    std::cout << "la opcion 1 sumas" << std::endl;
    std::cout << "la opcion 2 restas" << std::endl;
    std::cout << "la opcion 3 multiplicacion" << std::endl;
    std::cout << "la opcion 4 division" << std::endl;
    std::cout << "la opcion 5 raiz" << std::endl;
    std::cout << "la opcion 6 potencia" << std::endl;

    std::cin >> opc;
    //sintaxys de switch case
    switch (opc)
    {
    case 0:
        //codigo del caso 0
        std::cout << "Bienvenido a la opcion 0" << std::endl;
        break;

    case 1:
        //codigo caso 1
        std::cout << "Introduzca el primer numero" << std::endl;
        std::cout << "Ahora introduce el segundo" << std::endl;
        std::cin >> a;
        std::cin >> b;
        suma = a + b;
        std::cout << "Resultado de la suma es: " << suma << std::endl;
        break;

    case 2:
        //codigo del caso 2
        std::cout << "Introduzca el primer numero" << std::endl;
        std::cin >> a;
        std::cout << "Ahora introduce el segundo" << std::endl;
        std::cin >> b;
        resta = a - b;
        std::cout << "Resultado de la resta es: " << resta << std::endl;
        break;

    case 3:
        //codigo caso 3
        std::cout << "Introduzca el primer numero" << std::endl;
        std::cin >> a;
        std::cout << "Ahora introduce el segundo" << std::endl;
        std::cin >> b;
        multiplicacion = a * b;
        std::cout << "Resultado de la multiplicacion es: " << multiplicacion << std::endl;
        break;

    case 4:
        //codigo del caso 4
        std::cout << "Introduzca el primer numero" << std::endl;
        std::cin >> a;
        std::cout << "Ahora introduce el segundo" << std::endl;
        std::cin >> b;
        division = a / b;
        std::cout << "Resultado de la division es: " << division << std::endl;
        break;

    case 5:
        //codigo caso 5
        std::cout << "Raiz cuadrada del numero que ingreses:";
        std::cin >> num;
        raizCuadrada = sqrt(num);
        printf("La raiz cuadrada de %lf es %lf\n", num, raizCuadrada);
        break;

    case 6:
        //codigo del caso 5
        std::cout << "Pot 2 del numero que ingreses:";
        std::cin >> x;
        x = x * x;
        std::cout << "La pot 2 del num es:" << x;
        break;

    default:
        std::cout << "Lo siento, esta mal" << std::endl;

        return 0;
    }
}
