#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

    int cont=0;
    int ajuda;
    bool paridade;
    string valor;

    cin >> valor;

    for(int i=0 ; i<valor.size() ; i++){
        if(valor[i] == '1'){
            cont++;
        }
    }

    ajuda = valor.size();
    if(cont%2 == 0){
        paridade = 0;
    }else{
        paridade = 1;
    }

    cout << valor << paridade << endl;

	return 0;
}
