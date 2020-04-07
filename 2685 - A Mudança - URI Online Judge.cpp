#include<iostream>

using namespace std;

/**
 * FUN��O: DETERMINA UMA SALDA��O DE ACORDO
 *        COM �NGULO DE INCLINA��O DO SOL/LUA
 *
 */

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int graus;

	while(cin >> graus){ /* LER VALORES AT� SE INSERIDO VALOR DIFERENTE DE INTEIRO */

        if((graus>=0 && graus<90) || (graus == 360)){ /* condi��o p/ se dia */
            cout << "Bom Dia!!\n";
        }else if(graus>=90 && graus<180){ /* condi��o p/ se tarde */
            cout << "Boa Tarde!!\n";
        }else if(graus>=180 && graus<270){ /* condi��o p/ se noite */
            cout << "Boa Noite!!\n";
        }else if(graus>=270 && graus<360){ /* condi��o p/ se madrugada */
            cout << "De Madrugada!!\n";
        }

	}

	return 0;
}
