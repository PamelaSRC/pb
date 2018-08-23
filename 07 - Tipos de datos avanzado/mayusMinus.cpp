#include <iostream>
#include <string.h>
using namespace std;

/*
Pedir el nombre completo de un contacto ( char[10] )
Convertir la cadena en un formato de minúsculas y mayúsculas
alternadas:
aLbErTo bEnAvIdEs
*/

void main() { // Funciones se escriben con Mayúscula inicial
	char nombre[10];

	cout << "¿Nombre? ";

	cin >> nombre;

	if (nombre[0] < 91) {
		nombre[0] += 32; // nombre[0] = nombre[0] + 32;
	}
	if (nombre[1] > 96) {
		nombre[1] -= 32;
	}
	if (nombre[2] < 91) {
		nombre[2] += 32; // nombre[0] = nombre[0] + 32;
	}
	if (nombre[3] > 96) {
		nombre[3] -= 32;
	}
	if (nombre[4] < 91) {
		nombre[4] += 32; // nombre[0] = nombre[0] + 32;
	}
	if (nombre[5] > 96) {
		nombre[5] -= 32;
	}
	if (nombre[6] < 91) {
		nombre[6] += 32; // nombre[0] = nombre[0] + 32;
	}
	if (nombre[7] > 96) {
		nombre[7] -= 32;
	}
	if (nombre[8] < 91) {
		nombre[8] += 32; // nombre[0] = nombre[0] + 32;
	}
	if (nombre[9] > 96) {
		nombre[9] -= 32;
	}

	cout << nombre << endl;

	system("pause");
}