#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

//FUNCÃO PARA DETERMINAR O NÚMERO DE CASA DECIMAIS
int digito(int valor){

    int n=1;

    while(valor > 9){
        valor = valor/10;
        n++;
    }

    return n;
}

int main()
{
	setlocale(LC_ALL,"Portuguese");

    int valor;

    cin >> valor;
    while(valor != 0){

        int mat[valor][valor];
        int casaDec;

        //BLOCO DE INSERIR OS VALORES QUE SAO POTENCIA DE 2
        for(int i=0 ; i<valor ; i++){
            for(int j=0 ; j<valor ; j++){
                mat[i][j] = pow(2 , (i+j));
            }
        }

        int val , dif;

        casaDec = pow(2 , 2*(valor-1));
        casaDec = digito(casaDec);

        //BLOCA DE EXIBICAO DA MATRIZ COM A FORMATAÇAO
        //REFERENTE AO NUMEROO DE CASA DECIMAIS DO MAIOR VALOR
        for(int i=0 ; i<valor ; i++){
            for(int j=0 ; j<valor ; j++){
                val = digito(mat[i][j]);
                dif = casaDec - val;

                for (int k = 0; k < dif; ++k)
                    cout << " ";

                cout << mat[i][j];
                if(j != (valor - 1))
                    cout << " ";


            }
            cout << endl;
        }
        cout << endl;

        cin >> valor;
    }

	return 0;
}
