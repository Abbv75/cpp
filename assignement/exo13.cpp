#include <iostream>
#include "exo1.cpp"
#include "exo2.cpp"
#include "exo3.cpp"
#include "exo5.cpp"
#include "exo7.cpp"
#include "exo8.cpp"
#include "exo11.cpp"

using namespace std;

int main(){
    int exo;
    Reprendre:cout<<"Veuillez choisir un exo : ";
    cin>>exo;
    bool exit=false;
    switch (exo){
    case 1:
        exo1();
        break;
    case 2:
        exo2();
        break;
    case 3:
        exo3();
        break;
    case 5:
        exo5();
        break;
    case 7:
        exo7();
        break;
    case 8:
        exo8();
        break;
    case 11:
        exo11();
        break;
    
    default:
        cout<<"Merci de votre visite <3";
        exit=true;
        break;
    }

    if(exit){
        return 0;
    }
    else{
        goto Reprendre;
    }
}