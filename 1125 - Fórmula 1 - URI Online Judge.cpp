
#include<iostream>
#include<algorithm>

using namespace std;
/*
int indexOf(int vetor[] , int ){
    int id
}
*/
struct Piloto{
    int IDPiloto; /* n�mero de indentifica��o do piloto */
    int pontos; /* pontos do piloto no campionato */
};

bool maiorPonto(Piloto a , Piloto b){
    return a.pontos > b.pontos;
}

int main()
{

    int corrida=0; /* v�riavel do n�mero de competi��es */
    int competidor=0; /* v�riavel do n�mero de pilotos */

    cin >> corrida >> competidor;

    while(corrida!=0 && competidor!=0){ /*  */

        Piloto piloto[competidor]; /* variavel da estrutura Piloto */

        int colocacao[corrida][competidor]; /* vetor para guarda as posi��es de chegada
                                                      de cada competido em cada corrida */
        int sistem; /* numeros de colo��es pontuadas */

        //Bloco para da a indetifica��o dos pilotos zera as pontua��es
        for(int i=0 ; i<competidor ; i++){
            piloto[i].IDPiloto = i+1;
            piloto[i].pontos=0;
        }

        /* Inserindo a cola��es de cada competidos na corrrida */
        for(int i=0 ; i<corrida ; i++){
            int temp;
            for(int j=0 ; j<competidor ; j++){
                cin >> temp; /* coloca��o */
                colocacao[i][temp - 1] = j+1;
            }
        }

        cin >> sistem;
        int rankPontos;
        int pilotoID;

        for(int i=0 ; i<sistem ; i++){

            cin >> rankPontos;
            int listaPontos[rankPontos]; /* lista de pontos na ordem crescente das coloca��es */

            for(int j=0 ; j<rankPontos ; j++){

                cin >> listaPontos[j]; /* atribuindo pontos a posi��o j */

            }

            for(int j=0 ; j<corrida ; j++){
                for(int k=0 ; k<rankPontos ; k++){

                    pilotoID = colocacao[j][k]; /* identifica��o dos pilotos na ordem de chagada */
                    piloto[pilotoID - 1].pontos += listaPontos[k]; /* atribuido pontua��o aos pilotos segundo a lista de pontos */

                }
            }

            sort(piloto , piloto+competidor , maiorPonto); /* ordena��o das indetific�es dos pilotos
                                                            de acordo com as maiores pontua��es    */
            // Bloco para mostra os campe�es da competi��o
            int x=1;
            while(piloto[x-1].pontos == piloto[x].pontos){
                x++;
                //cout << piloto[x].IDPiloto << " ";
            }

            //cout << " -> " << x << " " << endl;

            int campeoes[x];
            for(int y=0 ; y<x ; y++){
                campeoes[y] = piloto[y].IDPiloto;
            }

            sort(campeoes , campeoes+3);

            for(int y=0 ; y<x ; y++){
                cout << campeoes[y] << " ";
            }

            cout << endl;
            //Bloco para da a indetifica��o dos pilotos zera as pontua��es
            for(int i=0 ; i<competidor ; i++){
                piloto[i].IDPiloto = i+1;
                piloto[i].pontos=0;
            }

        }

        /*
        for(int i=0 ; i<corrida ; i++){
            for(int j=0 ; j<competidor ; j++){
                cout << colocacao[i][j] << " ";
            }
            cout << endl;
        }
        */


        cin >> corrida >> competidor; /* Atribuido novas corridas e novos
                                         competidores em outro campeonato */
    }

	return 0;
}
