#include <iostream>
#include <map>

using namespace std;

// CLASSE P/ RESOLUCAO DO PROBLEMA
class Repositorio{
public:
    // Método construtor da classe
    // incializa número de instalados e verificados
    Repositorio(int c , int n){
        numberInstal = c;
        numberUpdata = n;
    }
    
    // Método p/ começar as funções da classe 
    void start(){
        int id , versao;  // ID e Versoa atual p/ verifica
        
        setList();

        for(int i=0 ; i<numberUpdata ; i++){
            cin >> id >> versao;
            // Verifica se o versao é mais nova
            if(versao > instalList[id]){
                // Verifica se ele não está na Lista do atualização
                if( !existUpload(id) ){
                    updataList.insert(make_pair(id , versao));
                // Caso ele estever na lista 
                // verifica se a versao e a nais recente
                }else if(updataList[id] < versao){
                    updataList[id] = versao;
                }    
            }
        }

        getList();  // exibir o resultado
    }

private:
    int numberInstal;  // Número de programas instalados
    int numberUpdata;  // Número de programas p/ verificar
    map<int , int> instalList; // Lista de tipo MAP de programas instalados
    map<int , int> updataList; // Lista de tipo MAP de programas p/ verificar

    // Define a lista dos programs instalados
    void setList(){
        int id , versao;
        for(int i=0 ; i<numberInstal ; i++){
            cin >> id >> versao;
            instalList.insert(make_pair(id , versao)); 
        }
    }

    // Método p/ verifica se o ID do programa 
    // já está na lista de Atualização
    bool existUpload(int chave){
        if(updataList.find(chave) != updataList.end()){
            return true;
        }else{
            return false;
        }
    }

    // Método p/ exibir o ID e a versão dos programas p/ atualizar
    void getList(){
        for(pair<int , int> currentProg : updataList){
            cout << currentProg.first << " " << currentProg.second << endl;
        }
    }
};

int main(){
    int nInstall , nCheck;

    cin>> nInstall >> nCheck;
    Repositorio *bancoDados = new Repositorio(nInstall , nCheck);

    bancoDados->start();

    return 0;
}