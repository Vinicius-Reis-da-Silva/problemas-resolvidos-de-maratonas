#include<iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int abas, caso;
	string acao;

	cin >> abas >> caso;

	for(int i=0 ; i<caso ; i++){

        cin >> acao;
        if(acao == "fechou"){
            abas++;
        }else if(acao == "clicou"){
            abas--;
        }

	}

	cout << abas << endl;

	return 0;
}
