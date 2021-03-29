#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

class Valor {
public:
    // CONSTRUTOR DA CLASSE
    Valor(long int digit ,long int del){
        numberDigit = digit;
        numberDelete = del;
        numberRest = digit - del;
    }

    // Método para incializa o objetos
    void start(){
        for(int i=0  ; i<numberDigit ; i++){
            char digCurrent;
            cin >> digCurrent;
            int valueTrans = parseInt(digCurrent); // passa o digito atual do tipo char p/ tipo inteiro

            // loop que retira da pilha valores menores que o digito atual
            // quando a pilha não estive vazia
            // numero de digitos apagados não atingi o limite
            while(!digitos.empty() && numberDelete>0 && valueTrans>digitos.top()){
                digitos.pop(); // aparga o utltimo valor adicionado na pilha
                numberDelete--; // diminui numero de valores p/ apagar
            }

            digitos.push(valueTrans); // adiciona o valor na pilha
        }
     
        theatData();
        mostra();

    }

private:
    long int numberDigit;  // Número de algorismos a serem digitados
    long int numberDelete; // Número de algorismos a serem apagado
    long int numberRest;   // Número de algorismos restantes 
    stack <int> digitos;  // Pilha resposta temporaria invertida
    vector<int> dataEnd;  // Vector do resultando final do algoritmo

    // MÉTODO P/ TRANSFORMA O CARACTERES P/ INTEIRO 
    int parseInt(char simb){
        return simb - '0';
    }

    // MÉTODO P/ FAZER O TRATAMENTO DO DADOS 
    void theatData(){
        // Passa o elementos da pilha p/ o vector
        while(!digitos.empty()){
            dataEnd.push_back(digitos.top());
            digitos.pop();
        }

        // inverte as posições dos elementos no vector
        reverse(dataEnd.begin() , dataEnd.end());
    }

    // MÉTODO P/ EXIBIR O RESULTADO
    void mostra(){
        string tp = "";
        for(int i=0 ; i<numberRest ; i++){
            char s = dataEnd[i] + '0';
            tp += s;
        }

        cout << tp << endl;
        /*
        for(int i=0 ; i<numberRest ; i++){
            cout << dataEnd[i];
        }
        cout << endl;
        */
    }
};

int main(){
    
    long int nDigitos , nApagar;
    while(nDigitos+nApagar != 0){
        
        cin >> nDigitos >> nApagar;
        Valor *myValor = new Valor(nDigitos , nApagar);

        myValor->start();

    }

    return 0;
}