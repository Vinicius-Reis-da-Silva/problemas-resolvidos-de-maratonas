#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float valor[12][12] , resul=0;
	int cont=0;
	char calc;

	cin >> calc;
	for(int i=0 ; i<12 ; i++){
        for(int j=0 ; j<12 ; j++){

            cin >> valor[i][j];
            if(j>i){
                resul += valor[i][j];
                cont++;
            }

        }
	}

	cout.precision(1);
	cout.setf(ios::fixed);

	if(calc == 'S'){
        cout << resul << endl;
	}else if(calc == 'M'){
	    resul = resul/cont;
	    cout << resul << endl;
	}

	return 0;
}
