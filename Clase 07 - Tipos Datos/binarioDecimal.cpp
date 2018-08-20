#include <iostream>
#include <string>

using namespace std;

void main() {
	string binario;

	cout << "Dame un número binario, ya: ";
	getline(cin, binario);

	/*
	0	1	2	3	4	5	6	7
	1	1	1	1	1	1	1	1
	128	64	32	16	8	4	2	1
	*/

	int n = 0;

	if (binario.at(0) ==  '1') { // Los caracteres se ponene entre ''
		n += 128;
	}
	if (binario.at(1) == '1') { // Los caracteres se ponene entre ''
		n += 64;
	}
	if (binario.at(2) == '1') { // Los caracteres se ponene entre ''
		n += 32;
	}
	if (binario.at(3) == '1') { // Los caracteres se ponene entre ''
		n += 16;
	}
	if (binario.at(4) == '1') { // Los caracteres se ponene entre ''
		n += 8;
	}
	if (binario.at(5) == '1') { // Los caracteres se ponene entre ''
		n += 4;
	}
	if (binario.at(6) == '1') { // Los caracteres se ponene entre ''
		n += 2;
	}
	if (binario.at(7) == '1') { // Los caracteres se ponene entre ''
		n += 1;
	}

	// Contarlos a partir de convertir caracteres a enteros atoi()
	// atoi(binario.at(0)) * 128;

	cout << "El número binario " << binario << " es " << n << endl;

	system("pause");
}