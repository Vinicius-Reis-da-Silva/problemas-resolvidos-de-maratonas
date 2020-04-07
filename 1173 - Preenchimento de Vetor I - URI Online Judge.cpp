#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor, vet[10];

	cin >> valor;

	vet[0] = valor;

	for(int i=1 ; i<10 ; i++){
        vet[i] = vet[i-1]*2;
	}

	for(int i=0 ; i<10 ; i++){
        cout << "N[" << i <<"] = " << vet[i] << endl;
	}

	return 0;
}
