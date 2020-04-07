#include<iostream>

using namespace std;

int main()
{

    int valor;

    cin >> valor;

    for(int i=1 ; i<=10000 ; i++){
        if(i%valor == 2){
            cout << i << endl;
        }
    }

	return 0;
}
