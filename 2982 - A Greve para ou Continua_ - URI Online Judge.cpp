#include<iostream>

using namespace std;

int main(){

    int caso , valor , resul=0;
    char tipo;

    cin >> caso;

    for(int i=0 ; i<caso ; i++){

        cin >> tipo >> valor;
        if(tipo=='V'){
            resul += valor;
        }else if(tipo=='G'){
            resul -= valor;
        }

    }

    if(resul>=0){
        cout << "A greve vai parar." << endl;
    }else{
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
    }

    return 0;
}

