#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int horaInicial, minInicial, horaFinal, minFinal;
	int durHora, durMin;

	cin >> horaInicial >> minInicial >> horaFinal >> minFinal;

	durHora = horaFinal - horaInicial;

	if(durHora <= 0){
        durHora = 24 + (horaFinal - horaInicial);
	}

	durMin = minFinal - minInicial;

	if(durMin<0){
	    durMin = 60 + (minFinal - minInicial);
	    durHora--;
	}

	if((horaInicial == horaFinal) && (minInicial == minFinal)){
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
	}else{
	    cout << "O JOGO DUROU " << durHora << " HORA(S) E " << durMin << " MINUTO(S)\n";
	}

	return 0;
}
