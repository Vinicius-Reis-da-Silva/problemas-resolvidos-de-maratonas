#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

class Chaves{
    public:
    Chaves(int linha){
        row = linha;
    }

    void start(){
        string msgCurrent;

        for(int i=0 ; i<=row ; i++){
            //cin.ignore();
            getline(cin , msgCurrent);
            message += msgCurrent;
        }

        if(chaves()){
            cout << "S" << endl;
        }else{
            cout << "N" << endl;
        }
    }

    private:
    int row;
    stack <char> keys;
    string message = "";
     // METODO P/ VERIFICA NA EXPRESSAO SE OS CHAVES SÃO VALIDOS
    bool chaves(){
        for(char simb : message){
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
    int num;
    cin >> num;
    Chaves *texto = new Chaves(num);

    texto->start();

    return 0;
}
