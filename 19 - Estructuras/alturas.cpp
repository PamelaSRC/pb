#include <iostream>
#include <string>
using namespace std;

int o; // opcion
int c; // contador

struct persona { // Nuevo tipo de dato
	int id;
	float altura;
	string nombre;
	char apellido[100];
};

persona p[5]; // Arreglo de 10 personas que se llama p

void menu();

void registrar();

void mostrarTodos();

void buscar();

void buscarNombre();

void modificar();

int main() {
	locale::global(locale("spanish"));
	c = 0; // Para inicializar el contador

	p[0].id = 0;
	p[0].altura = 1.8;
	// Para guardar desde el archivo una cadena de caracteres
	string a = "Calvillo"; // Se declara un string
	strcpy_s(p[0].apellido, a.c_str()); // Y se guarda con strcpy_s
	p[0].nombre = "Edgar";

	p[1].id = 1;
	p[1].altura = 1.6;
	a = "Gonz�lez";
	strcpy_s(p[1].apellido, a.c_str());
	p[1].nombre = "Romelia";

	p[2].id = 2;
	p[2].altura = 1.75;
	a = "Salazar";
	strcpy_s(p[2].apellido, a.c_str());
	p[2].nombre = "Alan";

	c = 3; // Como llenamos 4 [0, 3], sigue el índice 3

	menu();
}

void menu() {
	system("cls");
	cout << "Menú principal" << endl << endl;
	cout << "Qué quieres hacer" << endl;
	cout << "1. Registrar \n2. Mostrar todos \n3. Buscar \n4. Buscar nombre" << endl;
	cin >> o;

	switch (o)
	{
	case 1:
		registrar();
		break;

	case 2:
		mostrarTodos();
		break;

	case 3:
		buscar();
		break;
	case 4:
		buscarNombre();
		// cin.ignore();
		break;
	default:
		break;
	}
}

void registrar() {
	system("cls");
	cout << "Registro" << endl << endl;
	p[c].id = c;

	cout << "Altura: ";
	cin >> p[c].altura;

	cout << "Apellido: ";
	cin >> p[c].apellido; // Se corta al encontrar espacios
	// Limpia el flujo de entrada al cambiar a string de otro tipo de dato
	cin.ignore(); 

	cout << "Nombre: ";
	getline(cin, p[c].nombre); // Permite guardar espacios y no tiene límite de caracteres
	c++;
	menu();
}

void mostrarTodos() {
	system("cls");
	cout << "Todos los registros" << endl;
	for (int i = 0; i < c; i++) {
		cout << "Nombre y apellido: " << p[i].nombre << " " << p[i].apellido << endl;
		cout << "Altura" << ": " << p[i].altura << endl << endl;
	}

	system("pause > nul");
	menu();
}

void buscar() {
	system("cls");
	cout << "Buscador" << endl << endl;
	cout << "¿Qué id quiere ver? " << endl;
	cin >> o;

	bool encontrado = false;
	for (int i = 0; i < c; i++)
	{
		if (p[i].id == o) { // Si el id es igual que el especificado
			cout << "Lo encontré:" << endl;
			cout << "Altura" << p[i].id << ": " << p[i].altura << endl;
			encontrado = true;
			break; // Salir del ciclo de for
		}
	}

	if (!encontrado) {
		cout << "No había registros con ese id." << endl;
	}

	system("pause > nul");

	menu();
}

void buscarNombre() {
	cin.ignore();
	system("cls");
	cout << "Buscador" << endl << endl;
	cout << "¿Qué nombre buscas? " << endl;
	string n;
	getline(cin, n);

	bool encontrado = false;
	for (int i = 0; i < c; i++)
	{
		// c_str() convierte de string a cadena de caracteres
		// strcmp sólo funciona con cadenas de caracteres

		if (strcmp(n.c_str(), p[i].nombre.c_str()) == 0) { // Si el id es igual que el especificado
			cout << "Lo encontré: " << endl;
			cout << "Altura" << p[i].id << ": " << p[i].altura << endl;
			encontrado = true;
			break; // Salir del ciclo de for
		}
	}

	if (!encontrado) {
		cout << "No había registros con ese nombre" << endl;
	}

	system("pause > nul");

	menu();
}