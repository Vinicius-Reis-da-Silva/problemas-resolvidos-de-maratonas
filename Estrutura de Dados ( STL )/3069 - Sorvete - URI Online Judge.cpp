#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Sorvete {
public:

    Sorvete(int distanciaSvt , int numberSvt){
        distancia = distanciaSvt;
        individuos = numberSvt;
    }

    void setData(){
        int inicio , fim;
        pair<int , int> tmp;

        for(int i=0 ; i<individuos ; i++){
            cin >> inicio >> fim;
            tmp = make_pair(inicio , fim);
            dataSorveteiro.push_back(tmp);
        }
    }


    void exibir(){
        for(pair<int , int> aux : locais){
            cout << aux.first << " " << aux.second << endl;
        }
    }

    void comparar(pair<int,int> a , pair<int,int> b){
        pair<int,int> newInterval;

    }

    void ficarOnde(){

        sort(dataSorveteiro.begin() , dataSorveteiro.end());
        pair<int , int> intervalo = dataSorveteiro[0];

        for(pair<int , int> aux : dataSorveteiro){
            if(intervalo.second < aux.first && intervalo.second < aux.second){
                locais.push_back(intervalo);
                intervalo = aux;
            }else if(intervalo.second >= aux.first && intervalo.second < aux.second){
                intervalo.second = aux.second;
            }
        }

        if(intervalo.second != dataSorveteiro[0].second){
            locais.push_back(intervalo);
        }
    }

private:
    int distancia;
    int individuos;
    vector<pair<int,int>> dataSorveteiro;
    vector<pair<int , int>> locais;
};



int main(){

    int dist , num;
    int cont=1;

    cin >> dist >> num;
    while((dist!=0) && (num!=0)){

        Sorvete *joaozinho = new Sorvete(dist , num);

        joaozinho->setData();
        joaozinho->ficarOnde();

        cout << "Teste " << cont << endl;
        joaozinho->exibir();

        cin >> dist >> num;
        cont++;
    }




    return 0;
}
