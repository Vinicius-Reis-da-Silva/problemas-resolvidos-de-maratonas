#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float mat[12][12];
	float resul=0;
	int cont=0;
	char ope;

	cin >> ope;

	for(int i=0 ; i<12 ; i++){
        for(int j=0 ; j<12 ; j++){

            cin >> mat[i][j];

            if((i>j) && (j+i < 11)){
                resul += mat[i][j];
                cont += 1;
            }
        }
	}

	cout.precision(1);
	cout.setf(ios::fixed);

	if(ope == 'M'){
        resul = resul/cont;
        cout << resul << endl;
	}else if(ope == 'S'){
	    cout << resul << endl;
	}

	return 0;

}
