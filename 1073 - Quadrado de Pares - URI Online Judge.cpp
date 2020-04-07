#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int cont;
	long int resul;
	cin >> cont;

	for(int i=1 ; i<=cont ; i++){
        if(i%2 == 0){
            resul = i*i;
            cout << i << "^2 = " << resul << endl;
        }
	}

	return 0;
}
