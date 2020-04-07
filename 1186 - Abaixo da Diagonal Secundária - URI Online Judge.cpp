#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	double valor[12][12];
	double soma=0, media=0, cont=0;
	char operacao;

	cin >> operacao;

	cout.precision(1);
	cout.setf(ios::fixed);

	if(operacao == 'S'){

        for(int i=0 ; i<12 ; i++){
            for(int j=0 ; j<12 ; j++){

                cin >> valor[i][j];
                if(i+j > 11){
                    soma += valor[i][j];
                    cont++;
                }
            }
        }

        cout << soma << endl;

	}else if(operacao == 'M'){

	    for(int i=0 ; i<12 ; i++){
            for(int j=0 ; j<12 ; j++){

                cin >> valor[i][j];
                if(i+j > 11){
                    soma += valor[i][j];
                    cont++;
                }
            }
        }

        media = soma/cont;
        cout << media << endl;

	}

	return 0;
}
