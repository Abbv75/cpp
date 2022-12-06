#include <iostream>

using namespace std;

void exo11(){
    int L;
    string symbole;
    cout<<"Veuillez donner la longueur";
    cin>>L;
    cout<<"Veuillez donner votre symbole";
    cin>>symbole;
    for(int i=1; i<=L; i++){
        int tmpI=i;
        while(tmpI>0){
            cout<<symbole<<"\t";
            tmpI--;
        }
        cout<<endl;
    }
}