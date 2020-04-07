#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int x , z , somaConser=0 , cont=0;

	cin >> x;

	do{
        cin >> z;
	}while( x >= z);

	while(z > somaConser){
        somaConser += x;
        cont++;
        x++;
	}

	cout << cont << endl;

	return 0;
}
