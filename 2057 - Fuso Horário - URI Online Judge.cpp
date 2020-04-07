#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int hora[3];
	int horaAtual;

	cin >> hora[0] >> hora[1] >> hora[2];

	horaAtual = hora[0] + hora[1] + hora[2];

	if(horaAtual>=24){
        horaAtual = horaAtual - 24;
	}else if(horaAtual<0){
	    horaAtual = horaAtual + 24;
	}

	cout << horaAtual << endl;

	return 0;
}
