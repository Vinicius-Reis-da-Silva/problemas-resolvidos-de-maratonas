#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int col=0;
	float mat[12][12], resul=0;
	char op;

	cin >> col >> op;

	for(int i=0 ; i<12 ; i++){
        for(int j=0 ; j<12 ; j++){

            cin >> mat[i][j];

        }
	}

	if(op == 'S'){
        for(int i=0 ; i<12 ; i++){
            resul += mat[i][col];
        }
	}else if(op == 'M'){
	    for(int i=0 ; i<12 ; i++){
            resul += mat[i][col];
        }
        resul = resul/12;
	}

	cout.precision(1);
	cout.setf(ios::fixed);
	cout << resul << endl;


	return 0;
}
