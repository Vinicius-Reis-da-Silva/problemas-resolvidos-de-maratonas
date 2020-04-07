#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor, pares=0;

	for(int i=0 ; i<5 ; i++){
        cin >> valor;
        if(valor%2 == 0){
            pares++;
        }
	}

	cout << pares << " valores pares\n";
	return 0;
}
