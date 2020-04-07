#include<iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor;
	int fatorial=1;

    cin >> valor;

	for(int i=valor ; i>0 ; i--){
        fatorial = fatorial*i;
	}

	cout << fatorial << endl;

	return 0;
}
