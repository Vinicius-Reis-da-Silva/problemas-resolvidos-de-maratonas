#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso , valor1 , valor2 , total=0;
	string play1 , play2 , ganhou;
	string escPlay1 , escPlay2;

	cin >> caso;

	for(int i=0 ; i<caso ; i++){

        cin >> play1 >> escPlay1 >> play2 >> escPlay2;
        cin >> valor1 >> valor2;

        total = valor1 + valor2;
        if(escPlay1 == "PAR"){
            if(total%2 == 0){
                ganhou = play1;
            }else{
                ganhou = play2;
            }
        }else if(escPlay1 == "IMPAR"){
            if(total%2 == 1){
                ganhou = play1;
            }else{
                ganhou = play2;
            }
        }

        cout << ganhou << endl;

	}

	return 0;
}
