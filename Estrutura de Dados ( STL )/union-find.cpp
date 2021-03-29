#include <iostream>


using namespace std;


class UniaoBusca
{
private:
    /* data */
    #define MAXN 100100
    int pai[MAXN];  // Cria o vetor que armazenará os pais
    int peso[MAXN]; // Peso entre os elementos 
    int qtd[MAXN];
    
public:

    UniaoBusca(int nElem){
        for(int i=1 ; i<=nElem ; i++){
            pai[i] = i;
            peso[i] = 0;
        }
    }

    // Função find: retorna o patriarca de um elemento 
    int find(int x){

        // Se ele for pai de si mesmo, ele é o patriarca
        if(pai[x] == x) return x;

        // Se não, devo olhar o patriarca de seu pai
        return pai[x] = find(pai[x]);
    }

    // Função join: faz a união dos conjuntos dos elementos x e y
    void join(int x , int y){ // ela recebe os elementos a serem unidos
        
        // como só vamos unis os patriaarcas só precisamos trabalhar com eles 
        // e fazemos cada um dos elementos receber o valor de seu patriarca
        x = find(x);
        y = find(y);

        // Agora x e y são os patriarcas dos conjuntos que desejamos unir
        // Basta fazer o patriarca de um se tornar pai do patriarca de outro

        // Se else forem o mesmo patriarca
        if(x == y){
            return;  // então os conjuntos já estão unidos e retornamos
        }

        // Se um dos dois patriarcas tiver peso menor, faça eke se filho do outro
        if(peso[x] < peso[y]){
            pai[x] = y;
            qtd[y]+=qtd[x]; // e atualizo o número de descendentes de y
        }
        if(peso[x] > peso[y]){
            pai[y] = x;
            qtd[x]+=qtd[y]; // e atualizo o número de descendentes de x
        }
        
        // Se os dois tiverem o mesmo peso
        if(peso[x] == peso[y]){
            // escolha um para ser o novo patriarca
            pai[x] = y;

            // e guardo que seu peso aumentará uma unidade
            peso[y]++;

            // e atualizo o seu número de descendentes
            qtd[y]+=qtd[x];
        }
    }
};


int main(){
    // leio os valores de n e k
    // n: número de elementos
    // k: número de operações
    int n, k;
    cin >> n >> k;

    char op;
    UniaoBusca *cliente = new UniaoBusca(n);
    int banco1 , banco2;

    for(int i=1 ; i<=k ; i++){

        // leio o tipo de operação e os bancos envolvidos
        cin >> op >> banco1 >> banco2;

        if(op == 'F'){  // Se a operação for a de fusão
            cliente->join(banco1 , banco2); // REalizo a união dos conjuntos
        }else if(op == 'C'){  // Se não for, é uma consulta

            // Se os bancos estiverem no mesmo conjunto
            if(cliente->find(banco1) == cliente->find(banco2)){
                cout << "S\n"; // imprime 'S'
            
            // Se não, imprime 'N'
            }else{
                cout << "N\n";
            }
        }
    }
/*
    for(int i=1 ; i<=n ; i++){
        cout << pai[i] << " ";
    }
    cout << endl;
*/
    return 0;
}