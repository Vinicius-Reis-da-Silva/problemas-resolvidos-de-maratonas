#include <iostream>
#include <set>

using namespace std;

class Troca{
public:
    // Método Construtor inicializa o numero de card do dois conjuntos
    Troca(int one , int two){
        numberCardX = one;
        numberCardY = two;
    }

    // Metodo de p/ começa as funções da classe
    void start(){
        // Inserir o primeiro conjunto de cards
        for(int i=0 , tmp; i<numberCardX ; i++){
            cin >> tmp;
            arrayCardX.insert(tmp);
        }
        // Inserir o segundo conjunto de cards
        for(int j=0 , tmp ; j<numberCardY ; j++){
            cin >> tmp;
            arrayCardY.insert(tmp);
        }

        contagemDeTrocas();
        // exibir o número de cartas que podem se trocadas
        cout << numberTrocas << endl;

    }
private:
    int numberCardX;      // Número de cartas do primeiro conjunto
    int numberCardY;      // Número de cartas do segundo conjunto
    int numberTrocas=0;   // Número de trocas
    set<int> arrayCardX;  // Primeiro Conjunto de cartas
    set<int> arrayCardY;  // Segundo Conjunto de cartas

    // Metodo p/ conta o número possivel de trocas 
    void contagemDeTrocas(){
        int previous = -1;  // carta anterior do conjuto
        int trocasA = 0;
        int trocasB = 0;
        for(int current : arrayCardX){
            // verifica se a carta atual do 1º conjunto existe no 2º conjuto
            // verifica se a carta atual e diferente da carta anterior
            if( arrayCardY.find(current)==arrayCardY.end() && previous!=current){
                trocasA++;  // conta número de trocas
            }
            previous = current;
        }
        previous = -1;
        for(int current : arrayCardY){
            // verifica se a carta atual do 2º conjunto existe no 1º conjuto
            // verifica se a carta atual e diferente da carta anterior
            if( arrayCardX.find(current)==arrayCardX.end() && previous!=current){
                trocasB++;  // conta número de trocas
            }
            previous = current;
        }
        (trocasA<trocasB)?  numberTrocas=trocasA : numberTrocas=trocasB;
    }
   

};

int main(){
    int x , y;
    cin >> x >> y;
    
    while(x+y != 0){
        Troca *jogo = new Troca(x , y);

        jogo->start();

        cin >> x >> y;
    }
    
    
    return 0;
}