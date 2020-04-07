#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso;
	int valor;

	cin >> caso;

	for(int i=0 ; i<caso ; i++){

        cin >> valor;

        if(valor%2 != 0){

            cout << "ODD ";

            if(valor>0){
                cout << "POSITIVE\n";
            }else{
                cout << "NEGATIVE\n";
            }

        }else if(valor != 0 ){

            cout << "EVEN ";

            if(valor>0){
                cout << "POSITIVE\n";
            }else{
                cout << "NEGATIVE\n";
            }

        }else{

            cout << "NULL\n";

        }
	}
	return 0;
}
