#include <iostream>

using namespace std;

int main(){
    int code=1234, tmpCode;
    bool is_correct=false;
    for(int i=3; i>0; i--){
        if(i<3){
            cout<<"Code PIN incorrect. Il vous reste. "<<i<<" chances"<<endl;
        }
        cout<<"Veuillew saisir le code PIN.\n";
        cin>>tmpCode;
        if(tmpCode==code){
            is_correct=true;
            break;
        }
    }
    if(is_correct){
        cout<<"Code PIN correct.\n";
    }
    else{
        cout<<"Trop de tentatives.\n";
    }

    return 0;
}