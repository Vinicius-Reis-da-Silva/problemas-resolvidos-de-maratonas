#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor, i=0;
	int resto, resul;
	char trans[] = "0123456789ABCDEF";
    string hexa;

	cin >> valor;

	while(valor>15){

        resto = valor%16;
        hexa += trans[resto];
        valor = valor/16;
        i++;

	}

    //cout << trans[valor] << endl;
    hexa += trans[valor];

	for(int i = (hexa.size() - 1) ; i>=0 ; i--){
        cout << hexa[i];
	}

	cout << endl;

	return 0;
}
