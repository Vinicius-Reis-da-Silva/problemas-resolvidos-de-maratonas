#include<iostream>

using namespace std;
void mostra(int vet[] , string tipo , int tam);
void mostra(int vet[] , string tipo , int tam){
    for(int i=0 ; i<tam ; i++){
        cout << tipo << "[" << i << "] = " << vet[i] << endl;
    }
}

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int impar[5] , indexImpar=0;
	int par[5] , indexPar=0;
	int valor;

	for(int i=0 ; i<15 ; i++){

        cin >> valor;
        if(valor%2 == 0){

            par[indexPar] = valor;
            indexPar++;

            if(indexPar > 4){
                mostra(par , "par" , 5);
                indexPar=0;
            }

        }else{

            impar[indexImpar] = valor;
            indexImpar++;

            if(indexImpar > 4){
                mostra(impar , "impar" , 5);
                indexImpar=0;
            }

        }

	}

	mostra(impar , "impar" , indexImpar);
	mostra(par , "par" , indexPar);

	return 0;
}
