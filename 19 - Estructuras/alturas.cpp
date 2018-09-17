#include <iostream>
using namespace std;

int o; // opcion
int c; // contador

struct persona{ // Nuevo tipo de dato
    int id;
    float altura;
};

persona p[10]; // Arreglo de 10 personas que se llama p

void menu();

void registrar();

void mostrarTodos();

void buscar();

void modificar();

int main(){
    c = 0; // Para inicializar el contador

    p[0].id = 0;
    p[0].altura = 1.8;

    p[1].id = 1;
    p[1].altura = 1.6;

    p[2].id = 2;
    p[2].altura = 1.75;

    c = 4; // Como llenamos 4 [0, 3], sigue el índice 4

    menu();
}

void menu(){
    cout << "Qué quieres hacer" << endl;
    cout << "1. Registrar \n2. Mostrar todos \n3. Buscar" << endl;
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
    }
}

void registrar(){
    p[c].id = c;
    cout << "Altura: ";
    cin >> p[c].altura;
    c++;
    menu();
}

void mostrarTodos(){
    for(int i = 0; i < c; i++){
        cout << "Altura" << p[i].id << ": " << p[i].altura << endl;
    }
    menu();
}

void buscar(){
    cout << "¿Qué id quiere ver?";
    cin >> o;

    bool encontrado = false;
    for(int i = 0; i < c; i++)
    {
        if(p[i].id == o){ // Si el id es igual que el especificado
            cout << "Lo encontré" << endl;
            cout << "Altura" << p[i].id << ": " << p[i].altura << endl;
            encontrado = true;
            break; // Salir del ciclo de for
        }
    }

    if (!encontrado){
        cout << "No había registros con ese id" << endl;
    }
    
    menu();
}