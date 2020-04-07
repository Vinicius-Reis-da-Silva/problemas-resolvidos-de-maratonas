#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	char resp[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int numLetras=0;

	cin >> numLetras;

	for(int i=0 ; i<numLetras ; i++){
        cout << resp[i];
	}

	cout << endl;

	return 0;
}
