#include <iostream>
#include <string>
using namespace std;

int main(){
    // Un string es una cadena de caracteres sin tamaño inicial definido

    // Crea un arreglo de strings de dos elementos llamado nombreCompleto
    string nombreCompleto[2];

    // Esto también se puede
    nombreCompleto[0] = "José Alberto\n";

    cout << nombreCompleto[0];

    cout << "Ingresa tu(s) nombre(s):";
    // Almacena en el primer elemeto [0] de nombreCompleto la línea que escriba el usuario
    getline(cin, nombreCompleto[1]);

    cout << "Ingresa tu(s) apellidos(s):";
    // Almacena en el segundo elemeto [1] de nombreCompleto la línea que escriba el usuario
    getline(cin, nombreCompleto[0]);

    cout << "Tu nombre completo es:\n" << 
        nombreCompleto[0] << ", " << nombreCompleto[1];

    bool booleanos[5] = {true, false, true, false, false};

    bool bb[5][3] = {}; // Inicializa todos en false, 0

    string datosAlumno[1000][5];
    datosAlumno[0][0] = "José Alberto"; 
    datosAlumno[0][1] = "Benavides Vázquez"; 
    datosAlumno[0][2] = "jose.benavidezvz@uanl.edu.mx"; 
    datosAlumno[0][3] = "1373079"; 
    datosAlumno[0][4] = "1123123"; 

    cout << "Nombre: " << datosAlumno[0][0] <<
         "Nombre: " << datosAlumno[0][1] <<
        "Nombre: " << datosAlumno[0][2] <<
        "Nombre: " << datosAlumno[0][3] <<
        "Nombre: " << datosAlumno[0][4];

    return 0;
}