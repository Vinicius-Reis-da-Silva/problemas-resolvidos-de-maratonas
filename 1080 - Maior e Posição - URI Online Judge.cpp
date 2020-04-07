#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor , pos , maior;

	cin >> valor;
	pos = 1;
	maior = valor;

	for(int i=2 ; i<=100 ; i++){

        cin >> valor;

        if(valor > maior){
            maior = valor;
            pos = i;
        }

	}

	cout << maior << endl;
	cout << pos << endl;

	return 0;
}
