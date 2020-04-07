#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	char cpf[14];

	cin >> cpf;

	cout << cpf[0] << cpf[1] << cpf[2] << endl;
	cout << cpf[4] << cpf[5] << cpf[6] << endl;
	cout << cpf[8] << cpf[9] << cpf[10] << endl;
	cout << cpf[12] << cpf[13] << endl;

	return 0;
}
