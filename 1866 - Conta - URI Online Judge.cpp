#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso;
	int termos;
	int soma;

	cin >> caso;

	for(int i=0 ; i<caso ; i++){

        cin >> termos;
        soma = termos%2;
        cout << soma << endl;

	}

	return 0;
}
