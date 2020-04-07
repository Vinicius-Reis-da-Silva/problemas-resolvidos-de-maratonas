#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int inicio , fim;
	int somaImpar=0;

	cin >> inicio >> fim;

	if(inicio>fim){
        for(int i=fim+1 ; i<inicio ; i++){
            if(i%2 != 0){
                somaImpar += i;
            }
        }
	}else{
	    for(int i=inicio+1 ; i<fim ; i++){
            if(i%2 != 0){
                somaImpar += i;
            }
        }
	}

	cout << somaImpar << endl;

	return 0;
}
