#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	string sinal1 , sinal2 , resp;
	int jogada;

	cin >> jogada;

	for(int i=0 ; i<jogada ; i++){

        cin >> sinal1;
        cin >> sinal2;

        if(sinal1 == "ataque"){
            if(sinal2 == "ataque"){
                resp = "Aniquilacao mutua";
            }else{
                resp = "Jogador 1 venceu";
            }
        }else if(sinal1 == "pedra"){
            if(sinal2 == "ataque"){
                resp = "Jogador 2 venceu";
            }else if(sinal2 == "pedra"){
                resp = "Sem ganhador";
            }else if(sinal2 == "papel"){
                resp = "Jogador 1 venceu";
            }
        }else if(sinal1 == "papel"){
            if(sinal2 == "ataque"){
                resp = "Jogador 2 venceu";
            }else if(sinal2 == "pedra"){
                resp = "Jogador 2 venceu";
            }else if(sinal2 == "papel"){
                resp = "Ambos venceram";
            }
        }

        cout << resp << endl;

	}

	return 0;
}
