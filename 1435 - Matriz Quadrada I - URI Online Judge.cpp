#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int ordem;

	cin >> ordem;

	while(ordem > 0){

        int mat[ordem][ordem];
        int cont;

        if(ordem%2 == 0){
            cont = ordem/2;
        }else{
            cont = ordem/2 + 1;
        }

        for(int j=1 ; j<=cont ; j++){
            for(int i=(j-1) ; i<(ordem - (j-1)) ; i++){
                mat[j-1][i] = j;
                mat[i][j-1] = j;
                mat[ordem-j][i] = j;
                mat[i][ordem-j] = j;
            }
        }

        for(int i=0 ; i<ordem ; i++){
            for(int j=0 ; j<ordem ; j++){
                cout << setw(3) << mat[i][j];
                if(j != (ordem - 1))
                    cout << " ";
            }
            cout << endl;
        }

        cout << endl;

        cin >> ordem;
	}


	return 0;
}
