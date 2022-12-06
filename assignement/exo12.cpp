#include <iostream>

using namespace std;

bool premier(int nbr){
    bool premier=true;
    for(int i=2; i<=nbr/2; i++){
        if((nbr%i)==0){
            premier=false;
            break;
        }
    }
    if(premier){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int nbr;
    cout<<"Veuillez donner votre nombre";
    cin>>nbr;
    if(premier(nbr)){
        cout<<"Votre nombre est premier";
    }
    else{
        cout<<"Votre nombre n'est pas premier"<<endl;
        cout<<"--------------------------------------"<<endl;
    }

    for(int i=1; i<=1000; i++){
        if(premier(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}