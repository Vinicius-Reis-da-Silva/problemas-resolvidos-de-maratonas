#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	double valor=0;

	cin >> valor;

	if(valor>100 || valor<0){
        cout << "Fora de intervalo\n";
	}else{
	    if(valor>=0 && valor<=25){
            cout << "Intervalo [0,25]\n";
	    }
	    if(valor>25 && valor<=50){
            cout << "Intervalo (25,50]\n";
	    }
	    if(valor>50 && valor<=75){
            cout << "Intervalo (50,75]\n";
	    }
	    if(valor>75 && valor<=100){
            cout << "Intervalo (75,100]\n";
	    }
	}

	return 0;
}
