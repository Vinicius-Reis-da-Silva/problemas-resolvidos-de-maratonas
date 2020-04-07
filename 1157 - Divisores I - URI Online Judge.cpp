#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor;

	cin >> valor;

	for(int i=1 ; i<=valor ; i++){
        if(valor%i == 0){
            cout << i << endl;
        }
	}

	return 0;
}
