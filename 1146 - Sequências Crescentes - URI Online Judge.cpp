#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor=1;

	cin >> valor;
	while(valor > 0){

        cout << "1";
        for(int i=2 ; i<=valor ; i++){
            cout << " " << i;
        }
        cout << endl;
        cin >> valor;

	}
	return 0;
}
