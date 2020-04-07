#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int inicio = 7;

	for(int i=1 ; i<=9 ; i+=2){
        for(int j=0 ; j<3 ; j++){
            cout << "I=" << i << " J=" << inicio - j << endl;
        }
        inicio += 2;
	}

	return 0;
}
