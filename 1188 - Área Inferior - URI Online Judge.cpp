#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float mtz[12][12], resul=0, cont=0;
    char op;

    cin >> op;

	for(int i=0 ; i<12 ; i++){
        for(int j=0 ; j<12 ; j++){

            cin >> mtz[i][j];

            if((i+j>11) && (i>j)){
                resul += mtz[i][j];
                cont++;
            }
        }
	}

	cout.precision(1);
	cout.setf(ios::fixed);

	if(op == 'M'){
        resul /= cont;
        cout << resul << endl;
	}else if(op == 'S'){
	    cout << resul << endl;
	}


	return 0;
}
