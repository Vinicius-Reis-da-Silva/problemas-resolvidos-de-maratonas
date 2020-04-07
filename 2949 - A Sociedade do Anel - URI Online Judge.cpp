#include<iostream>

using namespace std;

struct Racas{
    int qtnTipo[5]={0 , 0 , 0 , 0 , 0};
    char tipo[5] = {'X','H','E','A','M'};
    string genero[5] = {"Hobbit(s)" , "Humano(s)" , "Elfo(s)" , "Anao(s)" , "Mago(s)"};
};

int main()
{
	setlocale(LC_ALL,"Portuguese");

	Racas grupo;
	int tam;

	cin >> tam;
	string nome[tam];
	char tipoCada[tam];

	for(int i=0 ; i<tam ; i++){

        cin >> nome[i] >> tipoCada[i];
        for(int j=0 ; j<5 ; j++){
            if(tipoCada[i]==grupo.tipo[j]){
                grupo.qtnTipo[j]++;
            }
        }

	}

	for(int i=0 ; i<5 ; i++){
        cout << grupo.qtnTipo[i] << " " << grupo.genero[i] << endl;
	}

	return 0;
}
