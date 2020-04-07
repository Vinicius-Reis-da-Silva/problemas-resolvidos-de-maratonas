#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int a , b;

	cin >> a >> b;

	if((a >= b) && (a%b == 0)){
        cout << "Sao Multiplos\n";
	}else if((a < b) && (b%a == 0)){
	    cout << "Sao Multiplos\n";
	}else{
	    cout << "Nao sao Multiplos\n";
	}

	return 0;
}
