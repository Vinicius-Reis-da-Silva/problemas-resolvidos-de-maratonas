#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int n;

	cin >> n;
	int valor[n];
	int dentroIntervalo=0;
	int foraIntervalo=0;

	for(int i=0 ; i<n ; i++){

        cin >> valor[i];
        if((valor[i]>=10) && (valor[i]<=20)){
            dentroIntervalo++;
        }else{
            foraIntervalo++;
        }

	}

	cout << dentroIntervalo << " in\n";
	cout << foraIntervalo << " out\n";

	return 0;
}
