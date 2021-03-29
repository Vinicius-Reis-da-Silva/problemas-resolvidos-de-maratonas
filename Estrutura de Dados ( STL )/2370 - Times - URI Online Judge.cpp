#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Time {
    vector<string>  nomes;
};

// Fun��o p/ ordenar os pares de elemetos comforme a pontua��o
bool pontoOrdem(pair<int , string> a , pair<int , string> b){
    return a.first > b.first;
}

// FUN��O P/ EXIBIR O PESSOSAS DE CADA TIME
void exibir(vector <string> timeAtual , int i){
    cout << "Time " << (i+1) <<endl;
    for(vector<string>::iterator it = timeAtual.begin() ; it != timeAtual.end(); it++){
        if(*it != ""){
            cout << *it << endl;
        }
    }
    cout << endl;
}

int main(){

    vector< pair<int , string> > aluno;
    string nome;

    int pts;
    int numberAluno, numberTime;

    // inserir numero do aluno e de time
    cin >> numberAluno >> numberTime;
    Time time[numberTime];

    // inserir nome e pontua��o
    for(int i=0 ; i<numberAluno ; i++){
        cin >> nome >> pts;
        aluno.push_back(make_pair(pts,nome));
    }

    // Ordenar (descrecente) os alunos comforme sua pontua��o
    sort(aluno.begin() , aluno.end() , pontoOrdem);

    // Bloco p/ duvisao da pessoa p/ cada time
    for(int i=0 ; i<aluno.size(); ){
        for(int j=0 ; j<numberTime ; j++ , i++){
            if(i>=numberAluno){
                break;
            }
            time[j].nomes.push_back(aluno[i].second);
        }
    }



    for(int i=0 , j=0; i<numberTime ; i++){
        vector< string > tmpExibir;

        while(j < time[i].nomes.size()){
            string nomeAtual = time[i].nomes[j];
            tmpExibir.push_back(nomeAtual);
            j++;
        }
        j=0;

        // Ordem alfabetica dos integrates do cada timr
        sort(tmpExibir.begin() , tmpExibir.end());
        exibir(tmpExibir , i); // fun��o para mostra as pessoas do time
    }

    return 0;
}
