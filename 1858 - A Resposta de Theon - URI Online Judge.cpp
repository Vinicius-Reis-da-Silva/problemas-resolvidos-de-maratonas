#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int menor=100 , vezes , atingi , pessoa;

	cin >> vezes;

	for(int i=1 ; i<=vezes ; i++){

        cin >> atingi;

        if(atingi<menor){
            menor = atingi;
            pessoa = i;
        }
	}

	cout << pessoa << endl;

	return 0;
}
