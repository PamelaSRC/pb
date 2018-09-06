#include <iostream>
#include <time.h>
using namespace std;

int main(){

    bool minas[18] = {}; // Inicia en 0

    srand(time(NULL));
    
    for (int i = 0; i < 18; i++){
        if (rand() % 5 == 0)
            minas[i] = true;

        if (minas[i]){
            cout << "[x]";
        } else{
            cout << "[ ]";
        }
    }
}