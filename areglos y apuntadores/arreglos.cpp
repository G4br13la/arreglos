#include <iostream>
#include <string> //para capturar y mostrar informacion al usuario
using namespace std;


// main = metodo
//int = estructura de datos
//[]=tamaño

int main(){
    //declaracion de variables
    string name[5]={"gabriela","juan","ivan","laura","samuel"};//inicializacion de un vector
    string name2[5];
    //imprecion del vector
    cout<<name[0];
    cout<<name[1];
    cout<<name[2];
    cout<<name[3];
    cout<<name[4];
    for (int i=0; i<name->length();i++){
        cout<<name[i];
    }

    for (int i=0; i<name->length();i++){
        cout<< "ingrese el nombre: ";
        cin>> name2[i];
    }
    //almacenar n frutas en un vector
    int n;
    string frutas[n];
    cout<< "ingrese la fruta: ";
    cin>> n;
    for (int i=0; i<frutas->length();i++){
        cout<< "ingrese la fruta: "<<i;//concatenar:unir una cadena de caracteres con una variable
        cin>> frutas[i];
    }

}