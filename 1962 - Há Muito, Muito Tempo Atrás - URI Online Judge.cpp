#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso;
	int periodo, ano;

	cin >> caso;

	for(int i=0 ; i<caso ; i++){

        cin >> ano;
        periodo = 2015 - ano;

        if(periodo>0){
            cout << periodo << " D.C.\n";
        }else if(periodo == 0){
            cout << periodo+1 << " A.C.\n";
        }else{
            periodo = periodo*(-1) + 1;
            cout << periodo << " A.C.\n";
        }
	}

	return 0;
}
