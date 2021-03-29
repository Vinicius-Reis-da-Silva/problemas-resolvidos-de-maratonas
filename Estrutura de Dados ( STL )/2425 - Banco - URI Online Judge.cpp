#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class FilaBank{
public:
    FilaBank(int nGuiche , int wait){
        maximumWait = wait;
        numberGuiche = nGuiche;

    }

    void addFila(int begin , int service){
        filaBanco.push(make_pair(-begin , service));
    }
    
    int timeBroke(){
        int numberBroke=0;
        int caixa[numberGuiche];
        int index=0;

        // Bloco p/ quando os caixas estiverem vazios na abertura 
        for(int i=0 ; i<numberGuiche ; i++){
            pair<int , int> tmp = filaBanco.top();
            caixa[i] = tmp.first*(-1) + tmp.second;
            filaBanco.pop();
        }

        while(!filaBanco.empty()){
            pair<int, int> tmp = filaBanco.top();
            
            // Bloco p/ encontrar o caixa com menor tempo de espera
            index=0;
            for(int i=0 ; i<numberGuiche ; i++){
                if(caixa[index] > caixa[i]){
                    index = i;
                }
            }
            
            if(caixa[index] + tmp.first > maximumWait) numberBroke++;
            caixa[index] += tmp.second;
            
            filaBanco.pop();

        }

        return numberBroke;
    }
private:
    priority_queue<pair<int , int>> filaBanco; 

    int maximumWait;
    int numberGuiche;

};

int main(){

    int guiche;
    int numberClient;
    int time=20;  
    int beginTime , serviceTime;

    cin >> guiche >> numberClient;
    FilaBank *fila = new FilaBank(guiche
    , time);

    for(int i=0 ; i<numberClient ; i++){
        cin >> beginTime >> serviceTime;
        fila->addFila(beginTime , serviceTime);
    }

    cout << fila->timeBroke() << endl;

    return 0;
}