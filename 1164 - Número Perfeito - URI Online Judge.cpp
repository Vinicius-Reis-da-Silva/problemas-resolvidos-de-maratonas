#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor , casos;
	int somaDivi=0;

	cin >> casos;

	for(int i=0 ; i<casos ; i++){

        cin >> valor;

        for(int j=1 ; j<valor ; j++){
            if(valor%j == 0)
                somaDivi += j;
        }

        if(somaDivi == valor){
            cout << valor << " eh perfeito\n";
        }else{
            cout << valor << " nao eh perfeito\n";
        }

        somaDivi = 0;
	}

	return 0;
}
