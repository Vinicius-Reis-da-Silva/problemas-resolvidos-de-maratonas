#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int altura, lagura;
	int tipo1, tipo2;

	cin >> altura >> lagura;

	tipo1 = altura*lagura + ((altura-1)*(lagura-1));
	tipo2 = (altura-1)*2 + (lagura-1)*2;

	cout << tipo1 << endl;
	cout << tipo2 << endl;

	return 0;
}
