#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	cout << "Nombre: " << endl;

	char nombre[20];

	cin >> nombre;

	cout << "Edad: " << endl;

	int edad;
	cin >> edad;

	int r = rand() % (edad + 1);

	cout << "Hola " << nombre
		<< ", de " << edad
		<< " anios.\n";
	
	cout << "Tu numero de la suerte es " << r << "." << endl;

	system("pause");

	return 0;
}