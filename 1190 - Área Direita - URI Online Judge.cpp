#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float mtz[12][12];
	float resul = 0;
	char calc;

	cin >> calc;

	if(calc == 'S'){
        for(int i=0 ; i<12 ; i++){
            for(int j=0 ; j<12 ; j++){

                cin >> mtz[i][j];

                if((j>i) && (i+j>11)){
                    resul += mtz[i][j];
                }
            }
        }
	}else if(calc == 'M'){
	    float elem = 0;
	    for(int i=0 ; i<12 ; i++){
            for(int j=0 ; j<12 ; j++){

                cin >> mtz[i][j];

                if((j>i) && (i+j>11)){
                    resul += mtz[i][j];
                    elem++;
                }
            }
        }

        resul = resul/elem;

	}

	cout.precision(1);
	cout.setf(ios::fixed);

	cout << resul << endl;

	return 0;
}
