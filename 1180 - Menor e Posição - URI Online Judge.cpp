#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int n;

	cin >> n;
	int posMenor=0;
	int valor[n];

	for(int i=0 ; i<n ; i++){

        cin >> valor[i];
        if(valor[i]<valor[posMenor]){
            posMenor=i;
        }

	}

	cout << "Menor valor: " << valor[posMenor] << endl;
	cout << "Posicao: " << posMenor << endl;

	return 0;
}
