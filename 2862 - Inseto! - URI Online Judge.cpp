#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso;
	int energia;

	cin >> caso;

	for(int i=0 ; i<caso ; i++){
        cin >> energia;
        if(energia>8000){
            cout << "Mais de 8000!\n";
        }else{
            cout << "Inseto!\n";
        }
	}

	return 0;
}
