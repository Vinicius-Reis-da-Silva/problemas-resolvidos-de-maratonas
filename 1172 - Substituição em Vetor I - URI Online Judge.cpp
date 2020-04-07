#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

    int valor[10];

    for(int i=0 ; i<10 ; i++){
        cin >> valor[i];
        if(valor[i] <= 0){
            valor[i] = 1;
        }
    }

    for(int i=0 ; i<10 ; i++){
        cout << "X[" << i << "] = " << valor[i] << endl;
    }

	return 0;
}
