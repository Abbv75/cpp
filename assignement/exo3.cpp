#include <iostream>

using namespace std;

int main(){
    cout<<"Veuillew saisir 10 entiers.\n";
    int s=0;
    int tmpNbr;
    for(int i=0; i<10; i++){
        cin>>tmpNbr;
        s+=tmpNbr;
    }
    cout<< "La somme de vos 10 nombres est: "<<s;
    return 0;
}