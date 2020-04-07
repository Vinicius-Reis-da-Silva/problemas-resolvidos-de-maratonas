#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor[20], aux;

	for(int i=0 ; i<20 ; i++){
        cin >> valor[i];
	}

	for(int i=0 ; i<10 ; i++){
        aux = valor[i];
        valor[i] = valor[19 - i];
        valor[19 - i] = aux;
	}

	for(int i=0 ; i<20 ; i++){
        cout << "N[" << i << "] = " << valor[i] << endl;
	}

	return 0;
}
