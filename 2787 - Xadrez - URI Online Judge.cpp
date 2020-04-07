#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int linha;
	int coluna;
	int somaLC;

	cin >> linha >> coluna;
	somaLC = linha+coluna;

	if(somaLC%2 == 0){
        cout << "1\n";
	}else{
	    cout << "0\n";
	}
	return 0;
}
