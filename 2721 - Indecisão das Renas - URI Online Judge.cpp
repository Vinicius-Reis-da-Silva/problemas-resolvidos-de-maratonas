#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	string renas[] = {"Dasher" , "Dancer" , "Prancer" , "Vixen" , "Comet" , "Cupid" , "Donner" , "Blitzen" , "Rudolph"};
	int bolas , todaBolas=0;
	int escolhida;

	for(int i=0 ; i<9 ; i++){
	    cin >> bolas;
	    todaBolas += bolas;
	}

	escolhida = todaBolas%9;
    if(escolhida == 0){
        escolhida += 9;
    }

    escolhida--;

	cout << renas[escolhida] << endl;

	return 0;
}
