#include <iostream>
#include <vector>
//#include <string>
#include <map>

using namespace std;

// CLASSE P/ TRADUÇÃO DE PALAVRAS DE UMA FRASE EM JAPONES       
class Tradutor{
public:
    //Método Construtor da classe
    Tradutor(int x , int y){
        numberWord = x; // inicializa o numero de palavras com tradução
        numberRow = y; // inicializa o número de frases p/ traduzir
    }

    void start(){
        string txtOriginal;
        string txtTraduzido;
        
        setWord();

        for(int i=0 ; i<numberRow ; i++){
            original.clear();
            getline(cin , txtOriginal);
            
            listWord(txtOriginal);
            translate();

            getTranslate();
        }

        
    }

private:
    int numberWord;                 // Número de Palavras
    int numberRow;                  // Número de Linhas ( frases )
    map<string , string> dictionary;// Dicionario com (original , tradução)
    vector<string> original;        // Vector com cada palavras da frases
    string traducao = "";           // tradução da frase

    // Método p/ Criar um banco de dados 
    // com as palavras que tem tradução
    void setWord(){
        string jap=" " , br=" ";
        for(int i=0 ; i<numberWord ; i++){
            cin >> jap;

            cin.ignore();
            getline(cin , br);
            // a tradução e original do estrutura MAP ( Chave , valor)
            dictionary.insert(make_pair(jap , br));
            
        }
    }
    
    // Método p/ separa a frase em uma
    // lista da palavras constida frase
    void listWord(string txt){
        string word="";
        for(int i=0 ; i<txt.size() ; i++){
            if(txt[i] != ' '){
                word += txt[i];
            }else{
                original.push_back(word);
                word = "";
            }
        }
        original.push_back(word);
        
    }

    // Método p/ traduzi cada palavra do jap em pt-br
    // Apartir da estrutura MAP(chave , valor)
    void translate(){
        traducao = "";
        for(string currentWord : original){
            //Verifica se a palavra está no dicionario
            if(dictionary.find(currentWord) != dictionary.end()){
                // Caso estaja traduz a palavra
                traducao += dictionary[currentWord] + " ";
            }else{
                // Caso não estaja mantei a original
                traducao += currentWord + " ";
            }
        }
        traducao.erase(traducao.end()-1);
    }

    // Método p/ exibit a frase traduzida
    void getTranslate(){
        cout << traducao << "\n\n";
    }
};

int main(){
    int nInstancia; // Número de instancias
    int nPalavras , nLinhas; // Número de palavra com tradução e frases para traduzir 
    cin >> nInstancia;

    for(int i=0 ; i<nInstancia ; i++){
        cin >> nPalavras >> nLinhas;
        Tradutor *music = new Tradutor(nPalavras , nLinhas);

        music->start();
    }
    return 0;
}