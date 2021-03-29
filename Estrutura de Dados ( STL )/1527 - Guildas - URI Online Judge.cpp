//#include <iostream>
#include <stdio.h>

using namespace std;

class GuildFights{
private:
    #define MAX_N 100100

    int parent[MAX_N];
    int ranks[MAX_N];
    int pontos[MAX_N];

    int nVictory=0;  // número de vitorias
    int playRF=1; // Pontos do jogador Rafael
public:

    // Método construtor do batalha de guildas
    GuildFights(int n){
        //int jp; // play current
        for(int i=1 ; i<=n ; i++){
           scanf("%d" ,pontos+i); // ler os pontos do jodador atual

            parent[i] = i; // adiciona o jogador na lista
            //pontos[i] = jp; // zera seu rank inical
            ranks[i] = 0; // Zera a posição do rank
        }

        nVictory=0;
        playRF=1;
    }

    // Método p/ encontra o lider da guilda
    int find(int x){
        if(parent[x] == x){
            return x;
        }else{
            return parent[x] = find(parent[x]);
        }
    }

    // Método p/ juntar as guildas
    void join(int x , int y){

        // Encontra ds patriacas de cada elemento
        int a = find(x);
        int b = find(y);

        if(a == b) return; // Caso já estejam unidos

        // Atualiza os dados do guilads
        parent[b] = a; // lider da guilda
        pontos[a] += pontos[b]; // pontos de cada jogador
        ranks[a] += ranks[b]; // rank de cada jogador

        if(playRF == b) playRF = a; // Faz os ponto de rafael mudar para o maior
    }

    // Método p/ guerra entre guildas
    void guildWar(int xMember , int yMember){
        xMember = find(xMember); // Procura o lider da guilda;
        yMember = find(yMember); // Procura o lider da guilda

        if(pontos[xMember] > pontos[yMember]){ // o primeiro vencer
            ranks[xMember]++; // aumenta o peso do rank do vencedor
            if(playRF == xMember) nVictory++; // se o lider for igual aos pontos de rafael
        }
        if(pontos[xMember] < pontos[yMember]){  // se o segundo vencer
            ranks[yMember]++;  // aumenta o peso do rank do vencedor
            if(playRF == yMember) nVictory++; // se o lider for igual aos pontos de rafael
        }
        printf("Numero de vitotias: %i\n" , &nVictory);
    }

    // Método p/ retorna o número de vitorias
    int victory(){
        return nVictory;
    }
};



int main(){

    int numberJp , numberAction;

    while(scanf("%d %d" , &numberJp , &numberAction) && numberJp+numberAction > 0){

        GuildFights *guildas = new GuildFights(numberJp);
        int action, play1, play2;
        int winNumber=0;

        for(int i=0 ; i<numberAction ; i++){
            
            scanf("%d %d %d" , &action, &play1, &play2);

            if(action == 1){  // caso de juntar as guildas
                guildas->join(play1 , play2);
            } else { // caso ocorrar batalha entre guildas
                guildas->guildWar(play1 , play2);
                
            }
        }
        winNumber = guildas->victory();

        printf("%d\n" , &winNumber);
    }


    return 0;
}
