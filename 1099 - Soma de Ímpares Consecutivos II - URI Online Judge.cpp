#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int n=0;
	int x=0 , y=0;
	int somaImpar=0;

	cin >> n;

	for(int i=0 ; i<n ; i++){

        cin >> x >> y;
        if(x > y){
            for(int j=y ; j<x ; j++){
                if((j%2 == 1) && (j != y))
                   somaImpar += j;
            }
        }else{
            for(int j=x ; j<y ; j++){
                if((j%2 == 1) && (j != x))
                   somaImpar += j;
            }
        }

        cout << somaImpar << endl;
        somaImpar = 0;
	}

	return 0;
}
