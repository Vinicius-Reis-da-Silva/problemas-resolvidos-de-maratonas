
#include<iostream>
#include<algorithm>

using namespace std;
/*
int indexOf(int vetor[] , int ){
    int id
}
*/
struct Piloto{
    int IDPiloto; /* número de indentificação do piloto */
    int pontos; /* pontos do piloto no campionato */
};

bool maiorPonto(Piloto a , Piloto b){
    return a.pontos > b.pontos;
}

int main()
{

    int corrida=0; /* váriavel do número de competições */
    int competidor=0; /* váriavel do número de pilotos */

    cin >> corrida >> competidor;

    while(corrida!=0 && competidor!=0){ /*  */

        Piloto piloto[competidor]; /* variavel da estrutura Piloto */

        int colocacao[corrida][competidor]; /* vetor para guarda as posições de chegada
                                                      de cada competido em cada corrida */
        int sistem; /* numeros de coloções pontuadas */

        //Bloco para da a indetificação dos pilotos zera as pontuações
        for(int i=0 ; i<competidor ; i++){
            piloto[i].IDPiloto = i+1;
            piloto[i].pontos=0;
        }

        /* Inserindo a colações de cada competidos na corrrida */
        for(int i=0 ; i<corrida ; i++){
            int temp;
            for(int j=0 ; j<competidor ; j++){
                cin >> temp; /* colocação */
                colocacao[i][temp - 1] = j+1;
            }
        }

        cin >> sistem;
        int rankPontos;
        int pilotoID;

        for(int i=0 ; i<sistem ; i++){

            cin >> rankPontos;
            int listaPontos[rankPontos]; /* lista de pontos na ordem crescente das colocações */

            for(int j=0 ; j<rankPontos ; j++){

                cin >> listaPontos[j]; /* atribuindo pontos a posição j */

            }

            for(int j=0 ; j<corrida ; j++){
                for(int k=0 ; k<rankPontos ; k++){

                    pilotoID = colocacao[j][k]; /* identificação dos pilotos na ordem de chagada */
                    piloto[pilotoID - 1].pontos += listaPontos[k]; /* atribuido pontuação aos pilotos segundo a lista de pontos */

                }
            }

            sort(piloto , piloto+competidor , maiorPonto); /* ordenação das indetificões dos pilotos
                                                            de acordo com as maiores pontuações    */
            // Bloco para mostra os campeões da competição
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
            //Bloco para da a indetificação dos pilotos zera as pontuações
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
