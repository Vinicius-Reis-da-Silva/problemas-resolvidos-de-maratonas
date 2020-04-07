#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int vezes;
	int inicio=0, nImpar=0, cont=0, somaImpar=0;

	cin >> vezes;

	for(int i=0 ; i<vezes ; i++){

        cin >> inicio >> nImpar;

        if(inicio%2==0){
            inicio++;
            for(int i=0 ; i<nImpar ; i++){
                somaImpar += inicio;
                inicio = inicio + 2;
            }
        }else{
            for(int i=0 ; i<nImpar ; i++){
                somaImpar += inicio;
                inicio = inicio + 2;
            }
        }

        cout << somaImpar << endl;
        somaImpar=0;

	}

	return 0;
}
