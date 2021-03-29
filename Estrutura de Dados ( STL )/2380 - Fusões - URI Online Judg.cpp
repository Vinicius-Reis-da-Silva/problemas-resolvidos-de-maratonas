#include <stdio.h>

using namespace std;


class Banco{
public:

    // Método construtor da classe
    Banco(int n , int b){
        numberBank = n;
        numberOp = b;
        
        // inicializa os conjuntos de cade elemento e seu peso
        for(int i=1 ; i<=numberBank ; i++){
            parent[i] = i;
            power[i] = 0;
        }
    }

    void start(){
        char typeFun;
        int bank1 , bank2;

        for(int i=0 ; i<numberOp ; i++){
            scanf( "%c %i %i" , &typeFun, &bank1, &bank2);

            if(typeFun == 'F'){

                join_set(bank1 , bank2);
            
            }else if(typeFun == 'C'){
            
                if(find_set(bank1) == find_set(bank2)){
                    printf("S\n");
                }else{
                    printf("N\n");
                }

            }
        }
    }
private:
    #define MAX_N 10200 // tam. da quant. de elem.

    int parent[MAX_N];  // conjuntos do elementos e seus pais
    int power[MAX_N]; // peso de cada elemento dos conjuntos
    int qtd[MAX_N];  // número de descedentes
    
    int numberBank;
    int numberOp;

    // Método de busca p/ encontrar o patriaca
    int find_set(int v){
        // Se o individo é o pai de si mesmo,
        // então é o patriaca e retorna ele mesmo
        if(parent[v] == v){
            return v;
        }

        // Se não for o patriaca então, 
        // verificar o patriaca de seu pai
        return parent[v] = find_set(parent[v]);
    }

    void join_set(int a , int b){
        // Buscamos os patriacas de cade elemento
        a = find_set(a);
        b = find_set(b);

        if(a == b){ // caso terem o mesmo patriaca 
            return; // então os grupos já estao unidos

        // se um dois patriaca tiverem peso menor,
        // faça ele se filho do outro
        }else if(power[a] < power[b]){
            
            parent[a] = b;
            qtd[b] += qtd[a];

        } else if(power[a] > power[b]){

            parent[b] = a;
            qtd[a] +=qtd[b];

        }else if(power[a] == power[b]){
            
            parent[a] = b;
            power[b]++;
            qtd[b] += qtd[a];

        }
    }

};

int main(){
    int ope , fusao;
    scanf("%i %i" , &ope , &fusao);

    Banco *agencia = new Banco(ope , fusao);
    
    agencia->start();

    return 0;
}