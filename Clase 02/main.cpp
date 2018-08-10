#include <iostream> // Librer�a (magia negra)
using namespace std; // Usar nombre de espacios
void main() {
	// Permite escribir con acentos
	locale::global(locale("spanish"));
	cout << "Esta es una l�nea de texto en espa�ol." << endl;

	int mat[] = { // Arreglo de matrículas
		7045,
		5240,
		6189,
		7846,
		8206,
		7375,
		3636,
		2735,
		4043,
		3204,
		5354,
		7840,
		5104,
		4187,
		6859,
		7915,
		2487,
		7860,
		2411,
		7906,
		5868,
		1876,
		3631,
		5142,
		0003,
		1551,
		2676
	};

	// Longitud del arreglo
	// Peso del arreglo / Peso de cada elemento
	int length = sizeof(mat) / sizeof(*mat);

	rand() % 901 + 100; // Genera un número al azar entre 100 y 1000

	for (int i = 0; i < length; i++) { // Ciclo
		cout << mat[i] << 
			"\t" << rand() % 901 + 100 << 
			"\t" <<	rand() % 901 + 100 << 
			"\t" << rand() % 901 + 100 <<
			"\t" << rand() % 901 + 100 << endl;
	}

	getchar(); // Espera entrada de texto
}