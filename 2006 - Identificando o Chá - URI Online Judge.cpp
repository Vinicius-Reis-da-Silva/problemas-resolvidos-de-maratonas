#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int compertidor[5];
	int tipoCha , acertos=0;

	cin >> tipoCha;

	for(int i=0 ; i<5 ; i++){

        cin >> compertidor[i];
        if(compertidor[i] == tipoCha){
            acertos++;
        }

	}

	cout << acertos << endl;

	return 0;
}
