#include<iostream>

using namespace std;

/**
 * FUNÇÃO: DETERMINA UMA SALDAÇÃO DE ACORDO
 *        COM ÂNGULO DE INCLINAÇÃO DO SOL/LUA
 *
 */

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int graus;

	while(cin >> graus){ /* LER VALORES ATÉ SE INSERIDO VALOR DIFERENTE DE INTEIRO */

        if((graus>=0 && graus<90) || (graus == 360)){ /* condição p/ se dia */
            cout << "Bom Dia!!\n";
        }else if(graus>=90 && graus<180){ /* condição p/ se tarde */
            cout << "Boa Tarde!!\n";
        }else if(graus>=180 && graus<270){ /* condição p/ se noite */
            cout << "Boa Noite!!\n";
        }else if(graus>=270 && graus<360){ /* condição p/ se madrugada */
            cout << "De Madrugada!!\n";
        }

	}

	return 0;
}
