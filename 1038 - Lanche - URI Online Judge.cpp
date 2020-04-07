#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float tipoLanche[] = {4.00 , 4.50 , 5.00 , 2.00 , 1.50};
	float pagar=0;
	int qtn=0 , cod=0;

	cin >> cod >> qtn;

	cout.precision(2);
	cout.setf(ios::fixed);

	pagar = tipoLanche[cod - 1]*qtn;

	cout << "Total: R$ " << pagar << endl;

	return 0;
}
