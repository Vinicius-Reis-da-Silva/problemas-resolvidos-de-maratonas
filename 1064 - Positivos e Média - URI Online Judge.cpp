#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float valor[6];
	float mediaZero;
	int maiorZero=0;

	for(int i=0 ; i<6 ; i++){

        cin >> valor[i];
        if(valor[i] > 0){
            maiorZero++;
            mediaZero += valor[i];
        }
	}

	mediaZero = mediaZero/maiorZero;

	cout.precision(1);
	cout.setf(ios::fixed);

	cout << maiorZero << " valores positivos" <<endl;
	cout << mediaZero << endl;
	return 0;
}
