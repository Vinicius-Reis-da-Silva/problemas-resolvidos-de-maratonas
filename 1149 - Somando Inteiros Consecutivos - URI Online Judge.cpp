#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int somaInt=0;
	int inicio, numValor=0;

	cin >> inicio;
	while(numValor<=0){
        cin >> numValor;
	}

	for(int i=0 ; i<numValor ; i++){
        somaInt += inicio;
        inicio++;
	}

	cout << somaInt << endl;

	return 0;
}
