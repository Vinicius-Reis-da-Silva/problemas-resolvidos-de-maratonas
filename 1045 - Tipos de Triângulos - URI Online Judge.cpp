#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float lado[3];

	for(int i=0 ; i<3 ; i++){
        cin >> lado[i];
	}

	for(int i=0 ; i<3 ; i++){

        int posicaoMaior=i;

        for(int j=i+1 ; j<3 ; j++){
            if(lado[posicaoMaior]<lado[j]){
                posicaoMaior = j;
            }
        }

        if(lado[posicaoMaior] != lado[i]){
            int aux = lado[i];
            lado[i] = lado[posicaoMaior];
            lado[posicaoMaior] = aux;
        }
	}

	if(lado[0] >= lado[1]+lado[2]){
        cout << "NAO FORMA TRIANGULO\n";
	}else{
        if(lado[0]*lado[0] == lado[1]*lado[1] + lado[2]*lado[2]){
            cout << "TRIANGULO RETANGULO\n";
        }else if(lado[0]*lado[0] > lado[1]*lado[1] + lado[2]*lado[2]){
            cout << "TRIANGULO OBTUSANGULO\n";
        }else if(lado[0]*lado[0] < lado[1]*lado[1] + lado[2]*lado[2]){
            cout << "TRIANGULO ACUTANGULO\n";
        }

        if(lado[0] == lado[1] && lado[0] == lado[2]){
            cout << "TRIANGULO EQUILATERO\n";
        }else if(lado[0] == lado[1] || lado[0] == lado[2] || lado[1] == lado[2]){
            cout << "TRIANGULO ISOSCELES\n";
        }

	}

	return 0;
}
