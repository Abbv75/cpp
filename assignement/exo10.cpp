#include <iostream>

using namespace std;

int main(){
    int L, l;
    cout<<"Veuillez donner la longueur";
    cin>>L;
    cout<<"Veuillez donner la largeur";
    cin>>l;
    for(int i=1; i<=l; i++){
        for(int j=1; j<=L; j++){
            cout<<"\t*";
            if(j==L){
                cout<<endl;
            }
        }
    }
    return 0;
}