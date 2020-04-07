#include<iostream>

using namespace std;

int posElem(string comida , string alim[]);

int main(){

    int caso , qnt , totVit = 0, pos; /* Var. respequitivamente numero de tipos de alimento ,
                                            quantidade , total de vitamina , posição do tipo
                                            de alimento no vetor */
    int vit[]={120 , 85 , 85 , 70 , 56 , 50 ,34}; /* Vetor de Qnt de mg de vitamina C */
    string comida; /* comida escolhida */
    string alim[]={" suco de laranja" , " morango fresco" ,
                    " mamao" , " goiaba vermelha" , " manga" ,
                    " laranja" , " brocolis"}; /* vetor de alimento na ordem de acordo com Qnt da vitamina C */
    cin >> caso; // Nº de tipos de alimentos
    while(caso>0){

        for(int i=0 ; i<caso ; i++){
            cin >> qnt; // inserir a quantidade de comidas
            getline(cin , comida); // inserir a tipo de comida
            pos = posElem(comida , alim); // pegar posição da comida no vetor
            totVit += qnt*vit[pos]; // relaciona com a mesma posição das vitaminas e mult. pela Qnt
        }

        if(totVit>130){
            cout << "Menos " << (totVit-130) << " mg" << endl;
        }else if(totVit<110){
            cout << "Mais " <<(110-totVit)<< " mg" << endl;
        }else{
            cout << totVit<< " mg" << endl;
        }

        totVit = 0;
        cin >> caso;
    }

    return 0;
}

//FUNÇÃO QUE ENCONTRA A POSIÇÃO ALIMENTO DENTRO DO VETOR DE STRINGS
int posElem(string comida , string alim[]){
    int tam = 0;

    while(tam<7){
        if(alim[tam]==comida){
            break;
        }
        tam++;
    }

    return tam;
}
