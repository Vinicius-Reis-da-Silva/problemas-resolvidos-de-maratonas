#include<iostream>

using namespace std;

int main(){

    string texto="";  // variavel do texto digitado
    string resp="";  // variavel de resposto da condição

    getline(cin , texto); // ler o caracteres inclusive com  espaco

     // verifica se o texto digitado tem mais do que 140 caracteres
    (texto.size() > 140)? resp="MUTE" : resp="TWEET";

    cout << resp << endl;

    return 0;
}
