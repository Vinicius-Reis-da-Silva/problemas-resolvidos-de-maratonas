#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int inicio , fim , tempo;

	cin >> inicio >> fim;

	if(inicio==fim){
        tempo = 24;
	}else if(inicio > fim){
	    tempo = (fim+24)-inicio;
	}else{
	    tempo = fim - inicio;
	}

	cout << "O JOGO DUROU "<< tempo << " HORA(S)\n";

	return 0;
}
