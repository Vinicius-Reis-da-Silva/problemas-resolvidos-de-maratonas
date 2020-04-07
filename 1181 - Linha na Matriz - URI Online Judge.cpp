#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float mat[12][12] , resul=0;
	int linha;
	char calc;

	cin >> linha >> calc;

	for(int i=0 ; i<12 ; i++){
        for(int j=0 ; j<12 ; j++){
            cin >> mat[i][j];
        }
	}

	for(int j=0 ; j<12 ; j++){
        resul += mat[linha][j];
	}

	cout.precision(1);
	cout.setf(ios::fixed);

	if(calc == 'S'){
        cout << resul << endl;
	}else if(calc == 'M'){
	    resul = resul/12;
	    cout << resul << endl;
	}

	return 0;
}
