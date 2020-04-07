#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int inseridos[3],ordenados[3];
	int aux;

	for(int i=0 ; i<3 ; i++){
        cin >> inseridos[i];
        ordenados[i] = inseridos[i];
	}

	for(int i=0 ; i<3 ; i++){
        for(int j=i+1 ; j<3 ; j++){
            if(ordenados[i]>ordenados[j]){
                aux = ordenados[i];
                ordenados[i] = ordenados[j];
                ordenados[j] = aux;
            }
        }
	}

	for(int i=0 ; i<3 ; i++){
        cout << ordenados[i] << endl;
	}
	cout << endl;
	for(int i=0 ; i<3 ; i++){
        cout << inseridos[i] << endl;
	}
	return 0;
}
