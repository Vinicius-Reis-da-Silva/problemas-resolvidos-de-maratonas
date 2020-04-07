#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

    long long int numLado , lado;
    long long int perimetro;

	cin >> numLado >> lado;

	perimetro = numLado * lado;

	cout << perimetro << endl;

	return 0;
}
