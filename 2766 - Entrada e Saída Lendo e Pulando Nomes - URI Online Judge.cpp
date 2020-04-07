#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	string nome[10];

	for(int i=0 ; i<10 ; i++){
        cin >> nome[i];
	}

	cout << nome[3-1] << endl;
	cout << nome[7-1] << endl;
	cout << nome[9-1] << endl;

	return 0;
}
