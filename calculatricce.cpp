#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int op;
	float  nbr1, nbr2;
	do{
		cout<<"Veuiller choisir une operation\n1-Addition\n2-Soustraction\n3-Multiplication\n4-Division\n";
		cin>>op;
	}while(op<1 || op>4);
	cout<<"Donnez la premiere operande: ";
	cin>>nbr1;
	cout<<"Donnez la deuxieme operande: ";
	cin>>nbr2;
	switch(op){
		case 1:
			nbr1+=nbr2;
			break;
		case 2:
			nbr1-=nbr2;
			break;
		case 3:
			nbr1*=nbr2;
			break;
		case 4:
			nbr1 =(int)nbr1%(int)nbr2;
			break;
		case 5:
			if(nbr2==0){
				cout<<"Impossible";
				nbr1= 0;
			}
			else{
				nbr1/=nbr2;
			}
			break;
	}
	
	cout<<nbr1;
	
	return 0;
}
