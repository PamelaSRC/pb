#include <iostream>
using namespace std;

/*
Preguntar si son vacaciones ( bool )
Preguntar si es fin de semana ( bool )
Es día de descanso si son vacaciones o fin de semana
Mostrar la respuesta en pantalla
*/

void main() { // Funciones se escriben con Mayúscula inicial
	bool vacaciones; // Variables se escriben en minúscula
	bool finDe;

	cout << "¿Son vacaciones?" << endl;
	cout << "1 = Sí; 0 = No" << endl;
	cin >> vacaciones;

	cout << "\n¿Es fin de semana?" << endl;
	cout << "1 = Sí; 0 = No" << endl;
	cin >> finDe;
	
	bool descanso;

	descanso = vacaciones || finDe; // O (Disyunción)

	if (descanso)
	{
		cout << "Descansa :)";
	}
	else {
		cout << "No Descansa :(";
	}

	cout << "\n\n";

	system("pause");


	bool hambre;
	bool comida;

	cout << "¿Tienes hambre?" << endl;
	cin >> hambre;
	cout << "¿Hay comida?" << endl;
	cin >> comida;

	bool aComer;
	aComer = hambre && comida;

	if (aComer == true) {
		cout << "Ve a comer";
	}
	else {
		cout << "No comes";
	}

	cout << "\n\n";

	system("pause");
}