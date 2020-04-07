#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

    long long int fib[61];
	int teste, index;

	fib[0] = 0;
	fib[1] = 1;

	for(int i=2 ; i<61 ; i++){
        fib[i] = fib[i-1] + fib[i-2];
	}

	cin >> teste;
	for(int i=0 ; i<teste ; i++){
        cin >> index;
        cout << "Fib(" << index << ") = " << fib[index] << endl;
	}

	return 0;
}
