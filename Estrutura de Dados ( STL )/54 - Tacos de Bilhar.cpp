#include <iostream>
#include <set>

using namespace std;

class Tacos{
public:
    Tacos(int n){
        numberTacos = n;
    }

    void start(){
        for(int i=0 , aux; i<numberTacos ; i++){
            cin >> aux;
            if(existeArmazem(aux)){
                estoqueDeTacos.erase(aux);
            }else{
                estoqueDeTacos.insert(aux);
                madeTacos += 2;
            }
        }

        cout << madeTacos << endl;
    }
private:
    int numberTacos;
    int madeTacos=0;
    set<int> estoqueDeTacos;  // 

    bool existeArmazem(int tamTaco){
        if(estoqueDeTacos.find(tamTaco) != estoqueDeTacos.end()){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    
    int valor;
    cin >> valor;
    Tacos *armaze = new Tacos(valor);

    armaze->start();

    return 0;
}