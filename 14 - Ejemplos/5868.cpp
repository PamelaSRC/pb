/* 
Programa en C++ que dibuje un rectángulo
relleno de asteriscos con base b y altura a dados
por el usuario
*/

#include<iostream>
using namespace std;
int main(){
    int a=0,b=0;
    cout<<"Base: "<<endl;
    cin >> b;
    
    cout << "Altura: "<<endl;
    cin >> a;
    
    int area = b * a;
    
    // Empezando en i = 0
    // Mientras i < area
    for(int i=0; i < area; i++){
        if(i % b == 0){
            cout << endl;
        }
        cout<<"*";
    }
}