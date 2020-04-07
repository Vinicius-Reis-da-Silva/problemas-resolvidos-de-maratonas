#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	string estado[] = {"Brasilia" , "Salvador" , "Sao Paulo" , "Rio de Janeiro" , "Juiz de Fora" , "Campinas" , "Vitoria" , "Belo Horizonte"};
	int ddd , destinoDDD[] = {61 , 71 , 11 , 21 , 32 , 19 , 27 , 31};
	bool Existe=false;
	cin >> ddd;

	for(int i=0 ; i<8 ; i++){
        if(ddd == destinoDDD[i]){
            cout << estado[i] << endl;
            Existe=true;
        }
	}

	if(Existe == false){
        cout << "DDD nao cadastrado\n";
	}

	return 0;
}
