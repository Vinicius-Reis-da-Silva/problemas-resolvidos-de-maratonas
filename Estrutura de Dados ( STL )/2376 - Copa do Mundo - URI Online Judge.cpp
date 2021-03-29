#include<iostream>
#include <queue>

using namespace std;

class Copa{
public:

    // Metodo construtor da classe
    Copa(int a, int b){
        char letra = 'A';

        numberPartida = a; // inicializa o numero de partidas
        numberTimes = b; // inicializa o numero de time

        // inicializa a atribuição de letras para cada time
        for(int i=0 ; i<numberTimes ; i++){
            time.push(letra); // adiciona a letra do time na fila
            letra++; // letra receber proxima letra
        }
    }

    // Metodo p/ insire os dados das partidas
    void inserirDados(){
        pair<int , int> currentPartida; // par de dado atual
        for(int i=0 ; i<numberPartida ; i++){
            cin >> currentPartida.first >> currentPartida.second;
            dadoPartida.push(currentPartida); // adiciona o dados da partidas na fila
        }
    }

    // Metodo que encontra o vencedor do jogo
    // conforme o resultado do insirido
    void iniciaJogo(){

        // loop para conta o numero de partidas
        while(numberPartida>0){
            queue <char> newTime; // fila de times que passaram p/ proxima partida

            for(int i=0; i<numberTimes/2 ; i++){
                // letra do ganhar da disputa
                int ganhadorDaPartida = disputa(dadoPartida.front());
                //  adiciona na fila do times da proximos partida
                newTime.push(ganhadorDaPartida);
                dadoPartida.pop(); // apagar os dados já utilizados
                numberPartida--;
            }

            time = newTime; // recepassa o resultado das eliminatorias
            numberTimes = numberTimes/2; // diminui o numero de times
        }

    }

    // Metodo p/ exibir o resultado final do jogo
    void exibir(){
        cout << time.front() << endl;
    }

private:
    queue <pair<int,int>> dadoPartida;
    queue <char> time;
    int numberPartida;
    int numberTimes;

    // Metodo p/ define o resultado da partida
    char disputa(pair<int,int> part){
        char resul;
        if(part.first > part.second){
            resul = time.front();
            time.pop();
            time.pop();
        }else{
            time.pop();
            resul = time.front();
            time.pop();
        }
        return resul;
    }
};

int main(){

    Copa *mundial = new Copa(15 , 16);

    mundial->inserirDados();
    mundial->iniciaJogo();
    mundial->exibir();

    return 0;
}
