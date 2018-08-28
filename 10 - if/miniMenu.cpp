#include <iostream>
using namespace std;

void main() {

	cout << "Elige la opción deseada" << endl;

	cout << "1. Opción 1" << endl;

	cout << "2. Salir" << endl;

	int o = 0; // opción elegida

	cin >> o;

	if (o == 1)
	{
		cout << "Elegiste la opción 1." << endl;
	}
	else if (o == 2) {
		cout << "Elegiste salir." << endl;
	}
	else {
		cout << "Elige una opción válida" << endl;
	}

	system("pause > nul");
}