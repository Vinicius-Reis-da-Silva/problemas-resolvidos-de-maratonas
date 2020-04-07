#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int notas[] = {2 , 5 , 10 , 20 , 50 , 100};
	int compra=0 , pagor=0;
	bool troco = false;

	cin >> compra >> pagor;

	while(compra != 0 || pagor != 0){

        for(int i=0 ; i<6 ; i++){
            for(int j=0 ; j<6 ; j++){
                if(pagor == compra+notas[i]+notas[j]){
                    troco = true;
                }
            }
        }

        if(troco == true){
            cout << "possible\n";
        }else{
            cout << "impossible\n";
        }

        troco = false;

        cin >> compra >> pagor;

	}

	return 0;
}
