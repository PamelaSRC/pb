#include <iostream>
#include <time.h>
#include <string>
using namespace std;

int main(){
    bool minas[9][9] = {}; // Inicia en 0

    cout << "  ";

    for (int i = 0; i < 9; i++){
        cout << " " << i << " ";
    }
    
    srand(time(NULL));
    
    for (int i = 0; i < 9; i++){ // filas
        for(int j = 0; j < 9; j++){ // columnas
            if (rand() % 5 == 0){
                minas[i][j] = true;
            }
        }
    }

    for (int i = 0; i < 9; i++){ // filas
        cout << "\n" << i << " ";
        for(int j = 0; j < 9; j++){ // columnas
            if (minas[i][j]){
                cout << "[x]";
            } else{
                int m = 0; // minas adyacentes
                if(j != 0 && minas[i][j - 1]){
                    m++;
                }
                if(j != 8 && minas[i][j + 1]){
                    m++;
                }
                if(i != 8 && minas[i + 1][j]){
                    m++;
                }
                if(i != 0 && minas[i - 1][j]){
                    m++;
                }

                // Diagonales
                if(j != 0 && i != 0 && minas[i - 1][j - 1]){ // Izq Arri
                    m++;
                }
                if(j != 8 && i != 0 && minas[i - 1][j + 1]){ // Der Arri
                    m++;
                }
                if(j != 0 && i != 8 && minas[i + 1][j - 1]){ // Izq Aba
                    m++;
                }
                if(j != 8 && i != 8 && minas[i + 1][j + 1]){ // Der Aba
                    m++;
                }


                if (m == 0){
                    cout << "[ ]";
                } else{
                    cout << "[" << m << "]";
                }
            }
        }
    }
}