#include <iostream>
using namespace std;

int o;
int parImpar;

void cueva();

void calle();

int main(){
    calle();

    system("pause");

    return 0;
}

void calle(){
    system("cls");

    cout << "Elige un número del 0 al 5." << endl;

    cin >> o;

    cout << "Elige 0. Par; 1. Impar" << endl;

    cin >> parImpar;

    int r = rand() % 6;

    int suma = o + r;
    
    if (suma % 2 == parImpar){
        cout << suma << " Ganaste" << endl;
    } else{
        cout << suma << " Perdiste" << endl;
    }

    cout << "1. Volver a jugar; 2. Salir";

    cin >> o;

    if(o == 1){
        calle();
    }

}