#include<iostream>

using namespace std;

int maxi(int duente[] , int tam);
bool coprimos(int maior , int duende[] , int tam);

int main()
{
	setlocale(LC_ALL,"Portuguese");

    int indiv;


    cin >> indiv;
    int duende[indiv];
    int maior;
    bool achou=true;

    for(int i=0 ; i<indiv ; i++){
        cin >> duende[i];
    }

    maior = maxi(duende , indiv);

    while(achou){
        maior++;
        achou = coprimos(maior , duende , indiv);
    }

    cout << maior << endl;

	return 0;
}

//FUNÇÃO P/ ENCONTRA O MAIOR VALOR DO VETOR
int maxi(int duende[] , int tam){

    int maior = duende[0];

    for(int i=1 ; i<tam ; i++){
        if(maior<duende[i]){
            maior = duende[i];
        }
    }

    return maior;
}

//FUNÇÃO P/ DETERMINAR SE OS NUMEROS SÃO COPRIMOS
bool coprimos(int maior , int duende[] , int tam){

    bool div=false;

    for(int i=0 ; i<tam ; i++){
        if((duende[i] != 1) && (maior%duende[i]==0)){
            div = true;
        }
    }

    return div;
}


