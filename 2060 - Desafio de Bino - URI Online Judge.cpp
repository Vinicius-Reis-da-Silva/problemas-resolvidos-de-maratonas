#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int numValor, valor;
	int multiplos[] = {0 , 0 , 0 , 0};

	cin >> numValor;

	for(int i=0 ; i<numValor ; i++){

        cin >> valor;

        for(int j=0 ; j<4 ; j++){
            if(valor % (j+2) == 0){
               multiplos[j]++;
            }
        }
	}

	for(int i=0 ; i<4 ; i++){
        cout << multiplos[i] << " Multiplo(s) de " << (i+2) << endl;
	}

	return 0;
}
