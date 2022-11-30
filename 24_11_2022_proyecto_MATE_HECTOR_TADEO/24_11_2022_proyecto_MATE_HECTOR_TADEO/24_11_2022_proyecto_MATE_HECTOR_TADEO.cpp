// 24_11_2022_proyecto_MATE_HECTOR_TADEO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <cstdlib>
using namespace std;
int Factorial(const int);
int Combinatorio(const int, const int);
int main()
{
	int n, m;

	cout << "Introduce los valores de n y m:" << endl;
	cout << "n: "; cin >> n;
	cout << "m: "; cin >> m; cout << endl;

	cout << "Hay " << Combinatorio(n, m) << " combinaciones de "
		<< n << " elementos tomados de " << m << " en " << m << endl << endl;
	system("PAUSE");
	return 0;
}
int Factorial(const int n) {
	int i, fact = 1;

	for (i = 2; i <= n; i++)
		fact = fact * i;

	return fact;
}
int Combinatorio(const int n, const int m) {
	return Factorial(n) / (Factorial(n - m) * Factorial(m));
}