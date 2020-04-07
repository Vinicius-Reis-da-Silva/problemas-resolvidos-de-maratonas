#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	double valor , vet[100];

	cin >> valor;
	for(int i=0 ; i<100 ; i++){
        vet[i] = valor;
        valor = valor/2;
	}

	cout.precision(4);
	cout.setf(ios::fixed);

	for(int i=0 ; i<100 ; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
	}

	return 0;
}
