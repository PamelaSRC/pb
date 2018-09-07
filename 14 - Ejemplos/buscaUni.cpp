#include <iostream>
#include <time.h>
using namespace std;

int main(){

    bool minas[18] = {}; // Inicia en 0; falsos

    srand(time(NULL));    
    
    for (int i = 0; i < 18; i++){
        if (rand() % 5 == 0){ // Entre 0 y 4: [0, 4]
            minas[i] = true;
        }
    }

    for (int i = 0; i < 18; i++){
        if (minas[i]){ // si es verdad que hay una mina
            cout << "[x]";
        } else{
            int m = 0;
            if(minas[i - 1] && i != 0){
                m++;
            }
            if(minas[i + 1] && i != 17){
                m++;
            }
            cout << "[" << m << "]";
        }
    }
}