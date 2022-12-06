#include <iostream>

using namespace std;

int main(){
    for(int i=100; i<501; i++){
        if(i%3==0 || i%5==0){
            cout<<i<<endl;
        }
    }
    return 0;

}
