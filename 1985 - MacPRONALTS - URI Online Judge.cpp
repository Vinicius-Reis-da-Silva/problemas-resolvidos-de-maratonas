#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int tiposComida, codigo;
	double comida[] = {1.50 , 2.50 , 3.50 , 4.50 , 5.50};
	double quant, pagar=0;

	cin >> tiposComida;

	for(int i=0 ; i<tiposComida ; i++){

        cin >> codigo >> quant;
        pagar += comida[codigo - 1001]*quant;

	}

	cout.precision(2);
	cout.setf(ios::fixed);

	cout << pagar << endl;

	return 0;
}
