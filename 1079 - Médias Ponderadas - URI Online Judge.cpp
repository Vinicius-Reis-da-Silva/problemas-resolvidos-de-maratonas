#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso;
	float valor1, valor2, valor3;
	float mediaPond;

	cin >> caso;

	for(int i=0 ; i<caso ; i++){

        cin >> valor1 >> valor2 >> valor3;

        mediaPond = (valor1*2 + valor2*3 + valor3*5)/(10);
        cout.precision(1);
        cout.setf(ios::fixed);
        cout << mediaPond << endl;

	}

	return 0;
}
