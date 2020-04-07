#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

    float mat[12][12] , resul=0 , cont=0;
    char operacao;

    cin >> operacao;

    for(int i=0 ; i<12 ; i++){
        for(int j=0 ; j<12 ; j++){

            cin >> mat[i][j];
            if(i+j < 11){
                resul += mat[i][j];
                cont++;
            }
        }
    }
    cout.precision(1);
    cout.setf(ios::fixed);

    if(operacao == 'M'){
        resul = resul/cont;
        cout << resul << endl;
    }else if(operacao == 'S'){
        cout << resul << endl;
    }

	return 0;
}
