// 2022_09_26_001_Tipos_De_Datos_CP1.cpp
// Jose Juan Bañuelos Hernandez
// En esta practica conoceremos las sintaxys para declarar variables 
// Solicitar, recibir, mostrar valores
//

#include <iostream>
#include<String>
int main()
{
   //Reglas o Sintaxys de daclarar variables
	//1)Tipo de dato, 2)Nombre, 3)Inicializacion, 4)Fin de comando.
	bool Comprobacion = 0;

	//Sintaxys para Hablar con el usuario 
	//1.- Palabra reservada 2.- Concatenar 3.- entre comillas escribir
	//4.- Concatenar 5.- Salto de linea 6.- Fin del comando.
	std::cout << "Hola usuario" << std::endl;
	std::cout << "El valor de la comprobacion es: " << Comprobacion
		<< std::endl;
	//Sintaxys para pedir Valores
	std::cout << "Hola ingresa 0 o 1 para saber si es False o True\n";
	//Sintaxys para Recibir Valores 
	//1.- Palabra reservada para pedir valores, 2.- Concatenar
	//3.- Variable donde su guarda lo solucitado.
	std::cin >> Comprobacion;
	//Syntaxis para Mostrar Valores
	//1.- Palabra reservada 2.- Concatenar 3.- entre comillas escribir 
	//4.- Concatenar 5.-Salto de linea 6.- Fin del comunicado 
	std::cout << "El valor sde la comprobacion es : " <<
		Comprobacion<< std::endl;
	std::cout << "Datos medicos" << std::endl;
	//Reglas o Sintaxys de daclarar variables
	//1)Tipo de dato, 2)Nombre, 3)Inicializacion, 4)Fin de comando.
	int num;
	float peso;
	double altura;
	bool comprobacion = 0;
	std::string name; 
	std::cout << "Cual es tu nombre:"; std::cin >> name;
	std::getline(std::cin, name);
	std::cout << "Escribe tu edad: "; std::cin >> num;
	std::cout << "Escribe tu peso: "; std::cin >> peso;
	std::cout << "Escribe tu altura: "; std::cin >> altura;
	std::cout << "Escribe tu genero M (0) o F (1): "; std::cin >> comprobacion;
	std::cout << "Tu nombre es: " << name << std::endl;
	std::cout << "Tu edad es: " << num << std::endl;
	std::cout << "Tu peso es: " << peso << std::endl;
	std::cout << "Tu altura es: " << altura << std::endl;
	std::cout << "Tu genero es: " << comprobacion << std::endl;
	




}
