#include <iostream>

using namespace std;

void exo5(){
    cout<<"Veuillew saisir un nombre: ";
    string nombre;
    cin>>nombre;
    int i=nombre.size()-1;
    string nbrReversed;
    while (i>=0){
        nbrReversed+=nombre[i--];
    }
    cout<<"Votre nombre inverse est: "<<nbrReversed;
    
}