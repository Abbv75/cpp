#include <iostream>

using namespace std;

void exo11(){
    int L;
    string symbole;
    bool retour=false;
    cout<<"Veuillez donner la longueur ";
    cin>>L;
    cout<<"Veuillez donner votre symbole ";
    cin>>symbole;
    for(int i=1; i>0; i++){
        if(retour==false && i>L){
            retour=true;
            i--;
        }
        int tmpI=i;
        while(tmpI>0){
            cout<<symbole<<"\t";
            tmpI--;
        }
        if(retour){
            i-=2;
        }

        cout<<endl;
    }
}