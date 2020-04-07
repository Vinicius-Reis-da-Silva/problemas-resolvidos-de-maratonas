#include<iostream>

using namespace std;

int main(){

    int valor=0 , j1, j2;
    bool def , roubo , acusar;

    cin >> def >> j1 >> j2 >> roubo >> acusar;

    valor = j1+j2; // soma o valores escolhidos

    //Bloco para trocar os tipo de numero escolhido no jogador 1
    if(def){
        def = 0;
    }else{
        def = 1;
    }

    if(roubo==0 && acusar==0){ // Condição para não usa o mecanimo de roubo
        // Condição que pegar o tipo numerico e o
        // resultadoe verifica se o jogado 1 ganhou
        if(valor%2==def){
            cout << "Jogador 1 ganha!" << endl;
        }else{
            cout << "Jogador 2 ganha!" << endl;
        }
    }else if((roubo==0 && acusar==1) || (roubo==1 && acusar==0)){
        cout << "Jogador 1 ganha!" << endl;
    }else {
        cout << "Jogador 2 ganha!" << endl;
    }

    return 0;
}
