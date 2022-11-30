// 28_009_2022_clase_practica_002.cpp : A Juan se le olvido como sumar, restar, multiplicar, dividir, potencia y raiz
//

#include <iostream>
#include <cmath>

int main()
{
	float suma, a, b, c, d, division, resta, multiplicacion;
	float num;
	double raizCuadrada;

	std::cout  << "Ingrese un numero:";
	std::cin >> a;
	std::cout << "Ingrese otro numero:";
	std::cin >> b;

	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	division = a / b;


	std::cout << "Raiz cuadrada del numero que ingreses:";
	std::cin >> num;
	raizCuadrada = sqrt(num);

	int x = 0;
	std::cout << "Pot 2 del numero que ingreses:";
	std::cin >> x;
	x = x * x;

	std::cout << "Resultado de la suma es: " << suma << std::endl;
	std::cout << "Resultado de la resta es: " << resta << std::endl;
	std::cout << "Resultado de la multiplicacion es: " << multiplicacion << std::endl;
	std::cout << "Resultado de la division es: " << division << std::endl;
	printf("La raiz cuadrada de %lf es %lf\n", num, raizCuadrada);
	std::cout << "La pot 2 del num es:" << x;
	return 0;
}
