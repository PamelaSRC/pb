#include <iostream>
using namespace std;

int main(){
    int base;
    int altura;

    cout << "Base:" << endl;
    cin >> base;

    cout << "Altura:" << endl;
    cin >> altura;

    int area = base * altura;

    for(int i = 0; i < area; i ++){
        if (i % base == 0){
            cout << "\n";
        }

        cout << "* ";
    }
}