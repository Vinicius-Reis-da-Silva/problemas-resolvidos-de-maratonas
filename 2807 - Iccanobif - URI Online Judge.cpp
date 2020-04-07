#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

void exibir(int fib[] ,int tam);

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int tam;

	cin >> tam;

	int fib[tam];

	fib[0] = 1;
	fib[1] = 1;

	for(int i=1 ; i<(tam-1) ; i++){
        fib[i+1] = fib[i] + fib[i-1];
	}

	exibir(fib , tam);

	return 0;
}

void exibir(int fib[] ,int tam){
    for(int i=(tam-1) ; i>0 ; i--){
        cout << fib[i] << " ";
    }
    cout << fib[0] << endl;
}
