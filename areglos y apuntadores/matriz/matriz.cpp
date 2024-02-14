#include <iostream>
#include <string> //para capturar y mostrar informacion al usuario
using namespace std;
//1) realizar una calvuladora de matriz 3x5

int main(){
    char calculadora[5][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'},{'+','0','-'}};

    for(int i=0; i<5;i++){
        for(int j=0; j<3; j++){
            cout<<calculadora[i][j];

        }
        cout<<endl;
    }
}