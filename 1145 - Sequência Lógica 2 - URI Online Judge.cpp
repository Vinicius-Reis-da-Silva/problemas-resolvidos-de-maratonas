#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor1 , valor2, cont=1;

	cin >> valor1 >> valor2;

	for(int i=1 ; i<=valor2 ; i++){

        if(valor1 == cont){
            cout << i << endl;
            cont=1;
        }else{
            cout << i << " ";
            cont++;
        }

	}

	return 0;
}
