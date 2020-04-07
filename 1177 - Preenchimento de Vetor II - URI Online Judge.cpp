#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor;
	int vet[1000];
	int sequen=0;

	cin >> valor;

	for(int i=0 ; i<1000 ; i++){

        vet[i] = sequen;
        sequen++;

        if(sequen>=valor){
            sequen = 0;
        }
	}

	for(int i=0 ; i<1000 ; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
	}

	return 0;
}
