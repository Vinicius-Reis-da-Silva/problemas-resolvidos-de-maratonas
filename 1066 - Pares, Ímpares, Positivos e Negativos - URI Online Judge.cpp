#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor;
	int par=0, impar=0, positivo=0, negativo=0;

	for(int i=0 ; i<5 ; i++){

        cin >> valor;

        if(valor%2 == 0){
            par++;
        }else{
            impar++;
        }

        if(valor>0){
            positivo++;
        }else if(valor<0){
            negativo++;
        }
	}

	cout << par << " valor(es) par(es)\n";
	cout << impar << " valor(es) impar(es)\n";
	cout << positivo << " valor(es) positivo(s)\n";
	cout << negativo << " valor(es) negativo(s)\n";

	return 0;
}
