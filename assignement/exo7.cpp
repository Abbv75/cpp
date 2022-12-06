#include <iostream>

using namespace std;

void exo7(){
    cout<<"Veuillew saisir un nombre entier.\n";
    int fact=1;
    int nombre;

    cin>>nombre;

    if(nombre<0){
        cout<<"Impossible";
    }
    else{
        for(int i=1; i<=nombre; i++){
            fact*=i;
        }
        cout<< "Le factoriel est : "<<fact;
    }
    
}