#include<iostream>

using namespace std;
/**
C�lcula a qunatidade de mandioca a se comprada
se consumida por todo os convidados na festa
*/
int main(){


    int porcao[] = {300 , 1500 , 600 , 1000 , 150}; // por��o fixa de cada convidado
    int qntMandioca = 225;  /* quantidade de mandioca ( inicializado com a porcao da cozinheira )*/
    int numberPorcao;  /* variavel de entrada p/ o n�meros de por��es de cada convidado */

    for(int index=0 ; index < 5 ; index++){
        cin >> numberPorcao;
        qntMandioca += numberPorcao * porcao[index];
    }

    cout << qntMandioca << endl;

    return 0;
}
