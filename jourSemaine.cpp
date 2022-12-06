#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string a[7];
	int index;
	a[0]="Lundi";
	a[1]="Mardi";
	a[2]="Mercredi";
	a[3]="Jeudi";
	a[4]="Vendredi";
	a[5]="Samedi";
	a[6]="Dimanche";
	do{
		cout<<"Saississez l'index de la semaine\n";
	
		cin>>index;
	}while(index<1 || index>7);
	cout<< "le jour de la semaine est "<<a[index-1];
	return 0;
}
