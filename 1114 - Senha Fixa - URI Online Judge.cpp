#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int senha=2002 , tentar=0;

	while(tentar != senha){

        cin >> tentar;

        if(tentar == senha){
            cout << "Acesso Permitido\n";
        }else{
            cout << "Senha Invalida\n";
        }

	}

	return 0;
}
