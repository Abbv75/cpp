#include <iostream>
#include <math.h>

using namespace std;

void exo2(){
    int nbr;
    do{
        cout<<"Saisissez votre nombre: ";
        cin>>nbr;
    }while(nbr<0);

    int i;

    while (nbr - pow(10, i++)>=0){
    }

    cout<<"Le nombre est constitue de "<<--i<< " chiffres";
}
