#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int compet;
	string nome;
	int forca;

	cin >> compet;

	for(int i=0 ; i<compet ; i++){
        cin >> nome >> forca;
        if(nome == "Thor"){
            cout << "Y\n";
        }else{
            cout << "N\n";
        }
	}


	return 0;
}
