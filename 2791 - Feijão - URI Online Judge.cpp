#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	bool feijao[4];
	int posicao;

	for(int i=0 ; i<4 ; i++){

        cin >> feijao[i];

        if(feijao[i] == 1){
            posicao = i+1;
        }
	}

	cout << posicao << endl;

	return 0;
}
