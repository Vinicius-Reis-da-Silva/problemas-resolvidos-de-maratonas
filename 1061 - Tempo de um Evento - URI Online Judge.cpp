#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
	string dia , doisPonto[2];
	int diaInicial, diaFinal, diaTotal;
    int horaInicial, horaFinal, horaTotal;
    int minInicial, minFinal, minTotal;
    int segInicial, segFinal, segTotal;

	cin >> dia >> diaInicial >> horaInicial >> doisPonto[0] >> minInicial >> doisPonto[1] >> segInicial;
	cin >> dia >> diaFinal >> horaFinal >> doisPonto[0] >> minFinal >> doisPonto[1] >> segFinal;

	diaTotal = diaFinal - diaInicial;
	horaTotal = horaFinal - horaInicial;
	minTotal = minFinal - minInicial;
	segTotal = segFinal - segInicial;

	if(segTotal<0){
        segTotal = 60 + segTotal;
        minTotal--;
	}
	if(minTotal<0){
        minTotal = 60 + minTotal;
        horaTotal--;
	}
	if(horaTotal<0){
        horaTotal = 24 + horaTotal;
        diaTotal--;
	}
	if(diaTotal<0){
        diaTotal = diaTotal*(-1);
	}

	cout << diaTotal << " dia(s)\n";
	cout << horaTotal << " hora(s)\n";
	cout << minTotal << " minuto(s)\n";
	cout << segTotal << " segundo(s)\n";

	return 0;
}
