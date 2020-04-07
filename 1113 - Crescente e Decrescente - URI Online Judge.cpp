#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int x , y;

	cin >> x >> y;

	while(x != y){

        if(x < y){
            cout << "Crescente\n";
        }else{
            cout << "Decrescente\n";
        }

        cin >> x >> y;
	}

	return 0;
}
