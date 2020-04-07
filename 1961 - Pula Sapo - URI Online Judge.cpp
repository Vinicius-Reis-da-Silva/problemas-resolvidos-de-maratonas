#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int pulo , numCanos;

	cin >> pulo >> numCanos;
	int altura[numCanos] , dif;
	bool consegui = true;

	for(int i=0 ; i<numCanos ; i++){
        cin >> altura[i];
	}

	for(int i=1 ; i<numCanos ; i++){

        dif = altura[i-1] - altura[i];
        if(dif<0){
            dif *= (-1);
        }
        if(pulo < dif){
            consegui = false;
        }
	}

	if(consegui){
        cout << "YOU WIN\n";
	}else{
	    cout << "GAME OVER\n";
	}

	return 0;
}
