#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Género: " << endl;
    cout << "m: Masculino \nf: Femenino \no: Otro" << endl;

    char g;
    cin >> g;

    string respuesta;
    respuesta = (g == 'm') ? "masculino" : (g == 'f') ? "femenina" : "otro";

    if (g == 'm'){
        respuesta == "masculino";
    } else if (g == 'f'){
        respuesta == "femenina";
    } else {
        respuesta == "otro";
    }

    cout << "Eres " << respuesta << endl;
}