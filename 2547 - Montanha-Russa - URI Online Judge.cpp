#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int visit , aceito = 0;
	int altMin , altMax;
	int altura;

	while(cin >> visit >> altMin >> altMax){

        aceito=0;

        for(int i=0 ; i<visit ; i++){

            cin >> altura;

            if((altura>=altMin) && (altura<=altMax)){
                aceito++;
            }
        }

        cout << aceito << endl;

	}

	return 0;
}
