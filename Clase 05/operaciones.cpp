#include <iostream>
using namespace std;

void main() {
	locale::global(locale("spanish"));

	// Ejemplos de operadores combinados
	int a = 3;
	int b = 6;

	cout << "a = " << a << ", b = " << b << endl;

	a = b++;

	cout << "a = b++; A ver qué pasa" << endl;
	cout << "a = " << a << ", b = " << b << endl;

	b = ++a;

	cout << "\nb = ++a; A ver qué pasa" << endl;
	cout << "a = " << a << ", b = " << b << endl;

	system("pause");

	// Generador de tareas aleatorias al azar

	int mat[] = {
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

	int length = sizeof(mat) / sizeof(*mat);

	for (int i = 0; i < length; i++) { // Ciclo

		int r = rand() % 100;
		int numProblema;

		if (r < 30){
			numProblema = 1;
		}
		else if(r < 60){
			numProblema = 2;
		}
		else if (r < 90) {
			numProblema = 3;
		}else{
			numProblema = 4;
		}

		cout << mat[i] << " | " << numProblema << endl;
	}

	system("pause");

	// Programa ejemplo

	int n;
	cout << "Escribe el número de lados de un polígono regular: ";
	cin >> n;

	int sumaAngulos;

	sumaAngulos = 180 * (n - 2);

	cout << "La suma de ángulos de tu polígono es: " << sumaAngulos << "°."<< endl;

	system("pause");
}