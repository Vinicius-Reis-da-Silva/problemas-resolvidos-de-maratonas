#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int idUsuario , gamePlay;
	int id , numCS=0;
	bool tipo;

	while(cin >> gamePlay >> idUsuario){

        numCS=0;

        for(int i=0 ; i<gamePlay ; i++){

            cin >> id >> tipo;

            if((id == idUsuario) && (tipo == 0))
                numCS++;
        }

        cout << numCS <<endl;
	}


	return 0;
}
