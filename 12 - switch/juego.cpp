#include <iostream>
#include <time.h>
using namespace std;

int movimientos = 64;
int tesoros[16];
char equipos[] = {'A', 'B', 'C'};
int equiposPos[] = {-1, -1, -1};
int puntos[] = {0, 0, 0};
bool avanzar[] = {true, true, true};
bool jugar[] = {true, true, true};
int turno = 0;

int o = 0;

int Juego();
int Tablero();
int Turno();

int main(){

    for (int i = 0; i < 16; i++){
        srand(time(NULL));
        int r = 1 + rand() % (i + 1);
        tesoros[i] = r;
    }

    Juego();

    cout << "Gracias por jugar" << endl;

    return 0;
}

int Tablero(){
    system("cls");
    
    movimientos = movimientos < 1 ? 0 : movimientos;
    cout << "Movimientos: " << movimientos << endl;
    
    cout << "A = " << puntos[0] << "\tB = " << puntos[1] << "\tC = " << puntos[2] << endl;
    
    cout << "[BASE]";
    
    for (int j = 0; j < 3; j++){
        if (equiposPos[j] == -1){ // Si están en la misma posición
            cout << " " << equipos[j] << " ";
        }
    }
    cout << "\n";


    for (int i = 0; i < 16; i++){
        char t = (tesoros[i] > 0) ? '*' : ' ';
        cout << "[ " << t << " ]";
        
        for (int j = 0; j < 3; j++){
            if (equiposPos[j] == i){ // Si están en la misma posición
                cout << " " << equipos[j] << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}

int Juego(){
    Tablero();

    if (jugar[0] || jugar[1] || jugar[2]){
        Turno();
    } else {
        for (int i = 0; i < 3; i++){
            if (equiposPos[i] > -1){
                puntos[i] = 0;
            }
        }
        
        Tablero();
    }
}

int Turno(){
    switch(turno){
        case 0:
        cout << "Turno A" << endl;
        break;

        case 1:
        cout << "Turno B" << endl;
        break;
        
        case 2:
        cout << "Turno C" << endl;
        break;
    }

    if (jugar[turno]){
        if (avanzar[turno]){
            cout << "1. Avanzar (1d6)";    
        }
        if(equiposPos[turno] > -1){
            cout << "\n2. Retroceder";
        }
        if (tesoros[equiposPos[turno]] > 0 && equiposPos[turno] > -1){
            cout << "\n3. Tesoro";
        }
        cout << "\n0. Salir" << endl;
        
        cin >> o;

        int r = 0;
        srand(time(NULL));
        r = 1 + rand() % (6);

        if (o == 1 && avanzar[turno]){
            cout << "Equipo " << equipos[turno] << " avanza " << r << endl;
            equiposPos[turno] += r;
            movimientos -= r;
            if(equiposPos[turno] > 15){
                equiposPos[turno] = 30 - equiposPos[turno];
                avanzar[turno] = false;
            }
        } else if(o == 2){
            cout << "Equipo " << equipos[turno] << " retrocede " << r << endl;
            equiposPos[turno] -= r;
            movimientos -= r;
            if(equiposPos[turno] < 0){
                equiposPos[turno] = -1;
                jugar[turno] = false;
            }
            avanzar[turno] = false;
        } else if(o == 3 && tesoros[equiposPos[turno]] > 0){
            puntos[turno] += tesoros[equiposPos[turno]];
            cout << "Equipo " << equipos[turno] << " ganó " << tesoros[equiposPos[turno]] << endl;
            tesoros[equiposPos[turno]] = 0;
            movimientos -= 3;
        }

        if (movimientos < 1){
            jugar[0] = false;
            jugar[1] = false;
            jugar[2] = false;
        }
        
        system("pause > nul");
    }
    
    turno++;
    turno = turno == 3 ? 0 : turno;

    if (o != 0){
        Juego();
    }

    return 0;
}