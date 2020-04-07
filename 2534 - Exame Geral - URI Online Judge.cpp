#include<iostream>
#include <stdlib.h>

using namespace std;

//FUNÇÃO PARA ORDENAR EM ORDEM DECRECENTE
void maiorOrdem(int *nota ,int tam){
    int aux;
    for(int i=0 ; i<tam ; i++){
        for(int j=i+1 ; j<tam ; j++){
            if(nota[i]<nota[j]){
                aux = nota[i];
                nota[i] = nota[j];
                nota[j] = aux;
            }
        }
    }
}

int main(){

    int nPessoa , nConsu;
    int *nota;
    int consu;

    while(cin >> nPessoa >> nConsu){

        nota = (int*) malloc(sizeof(int)*nPessoa);
        for(int i=0 ; i<nPessoa ; i++){
            cin >> nota[i];
        }

        maiorOrdem(nota , nPessoa);

        for(int i=0 ; i<nConsu ; i++){
            cin >> consu;
            cout << nota[consu-1] << endl;
        }

    }

    return 0;
}


