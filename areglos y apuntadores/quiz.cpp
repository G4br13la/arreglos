#include <iostream>
#include <string> //para capturar y mostrar informacion al usuario
using namespace std;


//1) crear 2 vectoeres de n cantidad de numeros que el usuario diligencie
//sumar los numeros diligenciados por el usuarios
//comparar y si son diferentes

int main(){
    int n;
    int m;
    int vector1[n];
    int vector2[m];

    cout<< "ingrese los datos (v1): ";
    cin>> n;

    cout<< "ingrese los datos (v2): ";
    cin>> m;
    int suma1= 0;
    int suma2=0;

    for (int i=0; i<n ;i++){

        cout<< "ingrese los datos para el v1: ";
        cin>> vector1[i];
        suma1=suma1+vector1[i];
        cout<<suma1;

    }

    for (int j=0; j<m;j++){
        cout<< "ingrese los datos para el v1: ";
        cin>> vector1[j];
        suma2=suma2+vector2[j];
        cout<<suma2;
    }

    if (suma1==suma2){
        cout<<"los vectores tienen el mismo resultado"<<endl;
    }else{
        cout<<"los vectores tienen distinto resultado"<<endl;
    }

}


//2) crear un vector de m pocisiones, simulando el juego
//de buscaminas y mostrar cuantas minas hay (lo determina el usuario)

int main(){
    int m;
    cout<< "ingrese si hay mina o no (s/n): ";
    cin>>m;
    int busca_minas[m];

    for (int j=0; j<m; j++){
        if(busca_minas[j] == 1){
            int count = busca_minas[j++];
        }else{
            cout<<"no hay busca minas";
        }
    }
}
