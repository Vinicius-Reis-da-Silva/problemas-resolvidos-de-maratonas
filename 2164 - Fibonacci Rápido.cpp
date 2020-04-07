#include<iostream>
#include<math.h>

using namespace std;

double fibonacci(double valor){
    double raiz5 = sqrt(5); // guarda o valor da raiz quadrada de 5
    double resul;
    double p1 = (1+raiz5)/2; // resultada do primeiro termo
    double p2 = (1-raiz5)/2; // resultado do segundo termo
    resul = (pow(p1 , valor) - pow(p2 , valor)); // eleva cada termo em 'valor' e subtrair o resultado
    resul = resul/raiz5; // divide o resultada da subtração por raiz quadrada de 5
    return resul; // retorna o resultado final da conta
}

int main(){

    double valor;

    cin >> valor;

    //Estrutura para defini a quantidade de casas decimais
    cout.precision(1);
    cout.setf(ios::fixed);
/*
    for(int i=1 ; i<=10 ; i++){
        cout << fibonacci(i) << endl;
    }
*/
    cout << fibonacci(valor) << endl; // exibir o resultado conseguido pela função

    return 0;
}
