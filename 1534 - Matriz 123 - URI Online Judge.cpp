#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int tam;

	while(cin >> tam){

        int mat[tam][tam];

        for(int i=0 ; i<tam ; i++){
            for(int j=0 ; j<tam ; j++){
                if(i+j == tam-1){
                    mat[i][j] = 2;
                }else if(i == j){
                    mat[i][j] = 1;
                }else{
                    mat[i][j] = 3;
                }
            }
        }

        for(int i=0 ; i<tam ; i++){
            for(int j=0 ; j<tam ; j++ ){
                cout << mat[i][j];
            }
            cout << endl;
        }

	}

	return 0;
}
