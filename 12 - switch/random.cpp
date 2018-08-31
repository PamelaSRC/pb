#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

int main(){
    for(int i = 0; i < 100; i++){
        srand(time(NULL)); // Cambiar la semila
        cout << rand() % 3;
        Sleep(1000);
    }
}