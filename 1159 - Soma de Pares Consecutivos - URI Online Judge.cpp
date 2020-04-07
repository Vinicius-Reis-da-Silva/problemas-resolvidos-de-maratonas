#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor, somaValor=0;
	int cont=0, consec;

	cin >> valor;

	while(valor != 0){

        if(valor%2 == 0){
            consec = valor;
            while(cont < 5){
                somaValor += consec;
                consec += 2;
                cont++;
            }
        }else{
            consec = valor +1;
            while(cont < 5){
                somaValor += consec;
                consec += 2;
                cont++;
            }
        }

        cout << somaValor << endl;

        consec = 0;
        cont=0;
        somaValor=0;
        cin >> valor;

	}

	return 0;
}
