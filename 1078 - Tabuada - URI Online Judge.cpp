#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor;

	cin >> valor;

	for(int i=1 ; i<=10 ; i++){
        cout << i << " x " << valor << " = " << valor*i << endl;
	}

	return 0;
}
