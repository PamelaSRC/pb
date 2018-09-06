#include <iostream>
#include <time.h>
using namespace std;

int main(){

    bool minas[81] = {}; // Inicia en 0

    cout << "  ";

    for (int i = 0; i < 9; i++){
        cout << " " << i << " ";
    }
    

    srand(time(NULL));
    
    for (int i = 0; i < 81; i++){
        if (i % 9 == 0){
            cout << "\n" << (i / 9) << " ";
        }
        if (rand() % 5 == 0)
            minas[i] = true;

        if (minas[i]){
            cout << "[x]";
        } else{
            cout << "[ ]";
        }
    }
}