#include <iostream>

using namespace std;

void exo8(){
    cout<<"Veuillew saisir 3 note.\n";
    float s=0, notes;
    int i;
    for(i=0; i<3; i++){
        cin>>notes;
        if(notes<=1 || notes>20){
            cout<<"La note doit etre comprise entre 1 et 20. Veuillez resaisir celui la\n";
            i--;
        }
        else{
            s+=notes;
        }
    }

    cout<<"La moyenne est: "<<s/i;
}