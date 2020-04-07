#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int digito , fib[3];

	cin >> digito;
	fib[0] = 0;
	fib[1] = 1;

	if(digito == 1){
        cout << fib[0];
	}else{
	    cout << fib[0] << " " << fib[1];
        for(int i=2 ; i<digito ; i++){
            fib[2] = fib[1] + fib[0];
            cout << " " << fib[2];
            fib[0] = fib[1];
            fib[1] = fib[2];
        }
	}
    cout << endl;

	return 0;
}
