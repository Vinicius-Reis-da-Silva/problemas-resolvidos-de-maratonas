#include <iostream>
#include <stack>

using namespace std;

class Expressao{
public:
    Expressao (int linha){
        numberOfExpression = linha;
    }

    // metodo de inicialização de inserção de expressoes
    void startExpression(){
        for(int i=0; i<numberOfExpression ; i++){
            cin >> expressionCurrent;
            if(testOrdem() && parentese() && colchetes() && chaves()){
                cout << "S" << endl;
            }else{
                cout << "N" << endl;
            }
            resert();
        }
    }

private:
    int numberOfExpression;       // Número de expressoes
    stack <char> parenthesis;     // Estrutura de Pilha p/ os parênteces
    stack <char> keys;            // Estrutura de Pilha p/ as chaves
    stack <char> brackets;        // EStrutura de Pilha p/ os colchetes
    string expressionCurrent;     // String do expressao atual
    stack <char> openExpression;  // Estrutura de Pilha p/ as expressao indepedente do tipo

    // METODO P/ VERIFICA A ORDEM DE ABERTURA E FECHAMENTO DA EXPRESSÇÕES SE ESTÃO CORRETAS
    bool testOrdem(){
        bool aux = true;
        for(auto symbol : expressionCurrent){
            // Condição p/ simboloa de abartura de expressoes
            if((symbol == '(') || (symbol == '{') || (symbol == '[')){
                openExpression.push(symbol);
            }else if(openExpression.empty()==false){
                if((openExpression.top()=='(') && (symbol == ')')){
                    openExpression.pop();
                }else if((openExpression.top()=='{') && (symbol=='}')){
                    openExpression.pop();
                }else if((openExpression.top()=='[') && (symbol==']')){
                    openExpression.pop();
                }
            }
        }

        // Verifica se sobrou algum simbolo de expressao
        if(openExpression.empty()==false){
            aux = false;
        }
        return aux;
    }

    // METODO P/ REINICIALIZAR AS VARIAVEIS DO TIPO STACK
    void resert(){
        while(!parenthesis.empty()){
            parenthesis.pop();
        }
        while(!keys.empty()){
            keys.pop();
        }
        while(!brackets.empty()){
            brackets.pop();
        }
        while(!openExpression.empty()){
            openExpression.pop();
        }
    }
    // METODO P/ VERIFICA NA EXPRESSAO SE OS PARENTESES SÃO VALIDOS
    bool parentese(){
        for(char simb : expressionCurrent){
            if(simb == '('){
                parenthesis.push('(');
            }else if(simb == ')'){
                if(parenthesis.empty()){
                    return false;
                }else{
                    parenthesis.pop();
                }
            }
        }

        if(parenthesis.empty() == false){
            return false;
        }else{
            return true;
        }
    }

    // METODO P/ VERIFICA NA EXPRESSAO SE OS COLCHETES SÃO VALIDOS
    bool colchetes(){
        for(char simb : expressionCurrent){
            if(simb == '['){
                brackets.push('[');
            }else if(simb == ']'){
                if(brackets.empty()){
                    return false;
                }else{
                    brackets.pop();
                }
            }
        }

        if(brackets.empty() == false){
            return false;
        }else{
            return true;
        }
    }

    // METODO P/ VERIFICA NA EXPRESSAO SE OS CHAVES SÃO VALIDOS
    bool chaves(){
        for(char simb : expressionCurrent){
            if(simb == '{'){
                keys.push('{');
            }else if(simb == '}'){
                if(keys.empty()){
                    return false;
                }else{
                    keys.pop();
                }
            }
        }

        if(keys.empty() == false){
            return false;
        }else{
            return true;
        }
    }
};

int main(){


    int interacoes;
    cin >> interacoes;
    Expressao *problemas = new Expressao(interacoes);
    
    problemas->startExpression();

    return 0;
}
