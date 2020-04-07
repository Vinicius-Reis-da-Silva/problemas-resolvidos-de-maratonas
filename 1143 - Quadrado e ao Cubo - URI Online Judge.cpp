#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor;

	cin >> valor;

	for(int i=1 ; i<=valor ; i++){
        cout << i << " " << i*i << " " << i*i*i << endl;
	}

	return 0;
}
