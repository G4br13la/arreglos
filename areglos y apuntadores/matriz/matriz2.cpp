//2) realizar una maquina espendedora de dulces (preguntar al usuario el tamaño de la matriz)
#include <iostream>
#include <string> //para capturar y mostrar informacion al usuario
using namespace std;

int main(){
    int c;
    int f;
    cout<<"¿cuantas filas quiere?"<< endl;
    cin>> f;
    cout<<"¿cuantas columnas quiere?"<< endl;
    cin>> c;

    char maquina_dulces[f][c];

    for(int i=0; i<c;i++){
        for(int j=0; j<f; j++){
            cout<<"¿que productos quiere?";
            cin>>maquina_dulces[f][c];

        }
    }

    for(int i=0; i<c;i++){
        for(int j=0; j<f; j++){
            cout<<maquina_dulces[f][c];
        }
        cout<< endl;
    }
    reurn 0

}
