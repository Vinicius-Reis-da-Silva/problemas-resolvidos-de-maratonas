#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int numMedida;

	cin >> numMedida;
	int velocidade[numMedida];
	int posicao=0;
	bool queda = false;

	for(int i=0 ; i<numMedida ; i++){

        cin >> velocidade[i];

        if((velocidade[i] < velocidade[i-1]) && (i > 0) && (queda == false)){
            posicao = i+1;
            queda = true;
        }
	}

	cout << posicao << endl;

	return 0;
}
