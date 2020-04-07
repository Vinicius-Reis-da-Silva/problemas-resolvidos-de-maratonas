#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso , pessoa=0;

	cin >> caso;

	while(caso != 0){

        for(int i=0 ; i<caso ; i++){

            cin >> pessoa;
            if(pessoa%2 == 0){
                pessoa = pessoa*2 - 2;
            }else{
                pessoa = pessoa*2 - 1;
            }

            cout << pessoa << endl;

        }

        cin >> caso;
	}


	return 0;
}
