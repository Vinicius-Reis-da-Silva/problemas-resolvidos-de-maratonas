#include <iostream>
#include <set>
using namespace std;

// Classe Resolução do Problema
class Frequencia{
public:
    // Método construtor da classe
    Frequencia(int row){
        // inicializa o number de assinaturas de identificação
        numberFreq = row;
    }

    // Método p/ inicializa a funções da classe
    void start(){
        // leitura p/ adicionar os elementos na Estrutura de Dados SET
        for(int i=0, tmp ; i<numberFreq ; i++){
            cin >> tmp;
            idFreq.insert(tmp);
        }

        contagem();

        // exibir o número real de alunos
        cout << numberStudent << endl;
    }

private:
    int numberFreq;         // Número de Assinaturas de Identificação
    int numberStudent=0;    // Número Real de estuda 
    set<int> idFreq;        // Lista de identificações Assinadas

    // Método p/ contar o número de real aluno 
    // Retirando os repertidos 
    void contagem(){
        int privious=-1; // Identificação anterior
        for(set<int>::iterator idCurrent=idFreq.begin() ; idCurrent != idFreq.end() ; idCurrent++){
            // Verifica se o ID anterior e diferente do ID atual
            if(privious != *idCurrent){
                numberStudent++;  // conta o número de alunos
                privious = *idCurrent;  // passo o ID do aluno atual p/ o anterior
            }
        }
    }
};

int main(){
    
    int num;
    cin >> num;
    Frequencia *aula = new Frequencia(num);

    aula->start();

    return 0;
}