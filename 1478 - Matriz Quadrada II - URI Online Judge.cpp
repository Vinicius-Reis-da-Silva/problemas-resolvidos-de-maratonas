#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int ordem;

	cin >> ordem;
	while(ordem != 0){

        int mat[ordem][ordem];
        int cont=1;

        for(int i=0 ; i<ordem ; i++){
            mat[i][i] = cont;
        }

        for(int i=1 ; i<ordem ; i++){
            for(int j=cont ; j<ordem ; j++){
                mat[j][j-cont] = cont+1;
                mat[j-cont][j] = cont+1;
            }
            cont++;
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
