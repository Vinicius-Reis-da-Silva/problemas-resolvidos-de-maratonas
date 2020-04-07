#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso;
	int porta;
	int ganhou=0;

	cin >> caso;

	for(int i=0 ; i<caso ; i++){
        cin >> porta;
        if((porta>0) && (porta<=3) && (porta != 1)){
            ganhou++;
        }
	}

	cout << ganhou << endl;

	return 0;
}
