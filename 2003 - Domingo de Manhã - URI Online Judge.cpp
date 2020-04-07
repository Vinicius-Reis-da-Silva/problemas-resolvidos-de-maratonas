#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int hora , minu;
	int atraso;
	char ponto;

	while(cin >> hora >> ponto >> minu){

        if(hora + 1 < 8){
            atraso = 0;
        }else{
            atraso = (hora-8+1)*60 + minu;
        }

        cout << "Atraso maximo: " << atraso << endl;

	}

	return 0;
}
