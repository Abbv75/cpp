#include <iostream>

using namespace std;

void exo1(){
    for(int i=100; i<501; i++){
        if(i%3==0 || i%5==0){
            cout<<i<<endl;
        }
    }
}
