#include <iostream>
#include<time.h>
using namespace std;

int main(){
    bool minas[18] = {}; // Se llena con 0s, o sea falses
    srand(time(NULL));
    for(int i = 0; i < 18; i++){
        int r = rand() % 3; // Duvuelve números enteros entre [0, 4] 
        cout << "[ ";
        if (r == 0){
            cout << "x";
            minas[i] = true;
        } else{
            cout << " ";
        }
        cout << " ]";
    }
    return 0;
}