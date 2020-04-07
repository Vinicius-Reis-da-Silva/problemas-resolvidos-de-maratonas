#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	double valorInicial, valorNovo;
	double resul;

	cin >> valorInicial >> valorNovo;

	resul = valorNovo - valorInicial;
	resul = (resul/valorInicial)*100;

	cout.precision(2);
	cout.setf(ios::fixed);

	cout << resul << "%\n";

	return 0;
}
