// Pokemon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez
//Batalla Pokemon


#include <iostream>


int elec;
int sel;
float hp;
float enemy;
float res;

int main()
{
	std::cout << "Hola soy el profesor \n";
	std::cout << "Porfavor Elige un Pokemon \n";
	std::cout << " 1.-Cyndaquil \n 2.-Chikorita \n 3.-Totodile" << std::endl;
	std::cin >> elec;

	if (elec == 1)
	{
		std::cout << " Elegiste a Cyndaquil \n";
		std::cout << " Tu enemigo sera Totodile \n" << std::endl;
		hp = 60, enemy = 65;
	}
	if (elec == 2)
	{
		std::cout << " Elegiste a Chikorita \n";
		std::cout << " Tu enemigo sera Cyndaquil \n" << std::endl;
		hp = 60, enemy = 65;
	}
	if (elec == 3)
	{
		std::cout << " Elegiste a Totodile \n";
		std::cout << " Tu enemigo sera Chikorita \n" << std::endl;
		hp = 60, enemy = 65;
	}

	std::cout << " LA BATALLA ESTA POR COMENZAR " << std::endl;

	do
	{

		std::cout << " Tu vida: " << hp << " Enemigo: " << enemy << std::endl;
		std::cout << " Que quieres Hacer? " << std::endl;
		std::cout << " 1.-Atacar \n 2.-Defender" << std::endl;

		std::cin >> sel;

		if (sel == 1)
		{
			res = enemy -= 10;
			hp = hp -= 8;

		}
		if (sel == 2)
		{
			hp = hp -= 5;

		}
		if (res < 0)
		{
			std::cout << " You win" << std::endl;
			break;
		}
		if (hp == 0)
		{
			std::cout << " You lose" << std::endl;
			break;
		}

	} while (true);

}