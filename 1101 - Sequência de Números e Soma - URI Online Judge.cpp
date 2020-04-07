#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor1=0 , valor2=0, somaSeq=0;

	cin >> valor1 >> valor2;

	while((valor1>0) && (valor2>0)){

        if(valor1>valor2){

            for(int i=valor2 ; i<=valor1 ; i++){
                cout << i << " ";
                somaSeq += i;
            }
            cout << "Sum=" << somaSeq << endl;

        }else{

            for(int i=valor1 ; i<=valor2 ; i++){
                cout << i << " ";
                somaSeq += i;
            }
            cout << "Sum=" << somaSeq << endl;

        }

        cin >> valor1 >> valor2;
        somaSeq = 0;

	}

	return 0;
}
