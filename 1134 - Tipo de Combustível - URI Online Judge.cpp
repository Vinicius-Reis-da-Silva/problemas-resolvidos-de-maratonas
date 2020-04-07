#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
	string nomeCombus[] {"Alcool: " , "Gasolina: " , "Diesel: "};
	int combus[] = {0 , 0 , 0};
	int tipo=0;

    while (tipo != 4){

        cin >> tipo;

        switch(tipo){
        case 1:
            combus[tipo - 1]++;
            break;
        case 2:
            combus[tipo - 1]++;
            break;
        case 3:
            combus[tipo - 1]++;
            break;
        }
    }

    cout << "MUITO OBRIGADO\n";

    for(int i=0 ; i<3 ; i++){
        cout << nomeCombus[i] << combus[i] << endl;
    }

	return 0;
}
