#include <iostream>
#include <math.h>

using namespace std;

/*
Hacer un programa que calcule el radio r y ángulo sexagesimal
alfa dadas las coordenadas (x, y) de un punto.
*/

void main() {
	locale::global(locale("spanish"));

	float x;
	float y;

	cout << "Escribe la coordenada x de un punto: ";
	cin >> x;

	cout << "\nEscribe la coordenada y del mismo punto: ";
	cin >> y;

	float r;

	r = sqrt(x * x + y * y);
	//r = sqrt(pow(x, 2) + pow(y, 2));
	//r = pow((pow(x, 2) + pow(y, 2)), 0.5); // 0.5 == 1.0 / 2.0

	r = round(r);

	float alfa = asin(y / r); // radianes

	alfa = round(alfa * 180.0 / 3.1416);

	cout << "\nEl radio es: " << r << " y el ángulo: " << alfa << endl;

	system("pause");
}