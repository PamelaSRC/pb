#include <iostream>
#include <time.h>
using namespace std;

int opcion;
int parImpar;
int compu;

// 1. Declarar funciones
void juego();

void main() {
	locale::global(locale("spanish"));
	juego(); // 3. Se mandan llamar
}

// 2. Definir funciones
void juego() {
	system("cls"); // Borrar el contenido de la consola
	cout << "Dame un número del 0 al 5." << endl;

	cin >> opcion;

	cout << "¿La suma será par o impar?" << endl;

	cout << "1. Impar \n2. Par" << endl;

	cin >> parImpar;

	// Cambia la semilla del random con base en el tiempo de procesador
	srand(time(NULL)); // Requiere librería time.h

	compu = rand() % 6; // Número del 0 al 5 incluidos

	int suma = compu + opcion;

	cout << "Rival: " << compu << endl;

	cout << "Suma = " << suma << endl;

	if(parImpar == 2){
		if (suma % 2 == 0) {
			cout << "¡Ganaste!" << endl;
		} else {
			cout << "Sigue participando." << endl;
		}
	}
	else {
		if (suma % 2 == 1) {
			cout << "¡Ganaste!" << endl;
		}
		else {
			cout << "Sigue participando." << endl;
		}
	}

	cout << "¿Quieres volver a jugar" << endl;
	
	cout << "1. Sí \n2. No" << endl;

	cin >> opcion;

	if (opcion == 1) {
		juego();
	}
}
