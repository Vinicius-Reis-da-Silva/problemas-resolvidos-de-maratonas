#include <iostream>
#include <queue>

using namespace std;

class Sanduiche{
public:
    Sanduiche(int x , int y){
        numberPieces = x;
        sizeSandwich = y;
    }

    void start(){
        setNumbers();

        for(int i=0 ; i<numberPieces ; i++){
            queue<int> tmp = valueNumbers;
            while(!tmp.empty() && sumPieces < sizeSandwich){
                sumPieces += tmp.front();
                tmp.pop();
            }

            if(sumPieces == sizeSandwich){
                numberPossible++;
            }

            sumPieces = 0;
            valueNumbers.push(valueNumbers.front());
            valueNumbers.pop();
        }
        cout << numberPossible << endl;
        /*
        for(int num : valueNumbers){
            cout <<"["<< num <<"]";
        }
        cout << "\nN elem: "<< valueNumbers.size() <<" - " << numberPossible<<endl;
        */
    }

private:
    int numberPieces;      // Número de Pedaços do sanduiche
    int sizeSandwich;      // Tamanho maximo p/ comer
    int sumPieces=0;       // Soma dos pedaços comidos
    int numberPossible=0;  // Número de possibilidade comer certo
    queue<int> valueNumbers;  // Vector do tamanho de cada pedaços do sanduiche

    // Criar uma lista dos pedaços do sanduiche
    void setNumbers(){
        for(int i=0 , currentNumber ; i<numberPieces ; i++){
            cin >> currentNumber;
            valueNumbers.push(currentNumber);
        }
    }

};

int main(){
    int ped , tam;
    cin >> ped >> tam;

    Sanduiche *joao = new Sanduiche(ped , tam);

    joao->start();

    return 0;
}
