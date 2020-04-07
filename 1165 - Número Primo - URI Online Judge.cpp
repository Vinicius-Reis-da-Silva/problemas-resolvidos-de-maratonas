#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int primo=0 , teste;
	int valor, i=0;

	cin >> teste;
	for(int j=0 ; j<teste ; j++){

        cin >> valor;

        while((valor > i) && (primo <= 2)){
            i++;
            if(valor%i == 0){
                primo++;
            }
        }

        if(primo > 2){
            cout << valor << " nao eh primo\n";
        }else{
            cout << valor << " eh primo\n";
        }
        i=0;
        primo=0;
	}

	return 0;
}
