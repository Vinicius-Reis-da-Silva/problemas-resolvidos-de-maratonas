#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float valor[6];
	int positivo = 0;

	for(int i=0 ; i<6 ; i++){
        cin >> valor[i];
        if(valor[i] > 0)
            positivo++;
	}

	cout << positivo << " valores positivos\n";
	return 0;
}
