#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

void tracos();
void barra();

int main()
{
	setlocale(LC_ALL,"Portuguese");

	tracos();

	for(int i=0 ; i<5 ; i++){
        barra();
	}

	tracos();

	return 0;
}

void tracos(){
    for(int i=0 ; i<39 ; i++){
        cout << "-";
	}
	cout << endl;
}

void barra(){
    cout << "|";
    for(int i=1 ; i<38 ; i++){
        cout << " ";
	}
	cout << "|\n";
}
