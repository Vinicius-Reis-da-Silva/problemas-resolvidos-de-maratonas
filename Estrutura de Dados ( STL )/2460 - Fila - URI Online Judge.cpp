#include <iostream>
#include <vector>

using namespace std;


// Metodo p/ encotra a posição do elemnto na fila
int indexOf(int valor, vector<int> fila){
    int id;
    for(int i=0 ; i<fila.size() ; i++){
        if(fila[i] == valor){
            id = i;
            break;
        }
    }
    return id;
}

// Metodo p/ mostra os elementos da fila
void exibir(vector<int> fila){
    for(int i=0 ; i<(int)fila.size()-1 ; i++){
        cout << fila[i] << " ";
    }
    cout << fila.back() << endl;
}

int main(){

    vector<int> fila; // Declarando o objeto da classe
    int inicio;
    int fim;
    int valor;
    int id, pos;

    cin >> inicio;
    for(int i=0 ; i<inicio ; i++){
        cin >> valor;
        fila.push_back(valor);
    }

    cin >> fim;
    for(int i=0 ; i<fim ; i++){
        cin >> id;
        pos=indexOf(id,fila);
        fila.erase(fila.begin()+pos); // apaga o elemento da posicao atribuida
    }

    exibir(fila);

    return 0;
}


