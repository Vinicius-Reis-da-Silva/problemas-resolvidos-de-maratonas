#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int valor;
	int cont=0;

	cin >> valor;
	bool camera[valor+1][valor+1];
	char segura[valor][valor];

	for(int i=0 ; i<(valor+1) ; i++){
        for(int j=0 ; j<(valor+1) ; j++){
            cin >> camera[i][j];
        }
	}

	for(int i=0 ; i<valor ; i++){
        for(int j=0 ; j<valor ; j++){

            if(camera[i][j] == 1){
                cont++;
            }
            if(camera[i][j+1] == 1){
                cont++;
            }
            if(camera[i+1][j] == 1){
                cont++;
            }
            if(camera[i+1][j+1] == 1){
                cont++;
            }

            if(cont >= 2){
                segura[i][j] = 'S';
            }else{
                segura[i][j] = 'U';
            }

            cont = 0;
        }
	}

	for(int i=0 ; i<valor ; i++){
        for(int j=0 ; j<valor ; j++){
            cout << segura[i][j];
        }
        cout << endl;
	}

	return 0;
}
