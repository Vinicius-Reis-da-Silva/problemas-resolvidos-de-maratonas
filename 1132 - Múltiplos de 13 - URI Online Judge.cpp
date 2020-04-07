#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int soma=0 , x , y;

	cin >> x >> y;

	if(x>y){
        soma = x;
        x = y;
        y = soma;
        soma = 0;
	}

	for(int i=x ; i<=y ; i++){
        if(i%13 != 0){
            soma += i;
        }
	}

	cout << soma << endl;

	return 0;
}
