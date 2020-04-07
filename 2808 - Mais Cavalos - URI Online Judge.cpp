#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	char inicio , chegada;
	int inic , cheg;
	int dist1, dist2;
    bool jogada=false;

	cin >> inicio >> inic >> chegada >> cheg;

	dist1 = chegada;
	dist2 = inicio;

	dist1 = (dist1 - dist2);
	if(dist1<0){
        dist1 = dist1*(-1);
	}

	dist2 = (cheg - inic);
    if(dist2<0){
        dist2 = dist2*(-1);
    }

    if((dist1>0) && (dist2>0) && (dist1+dist2 == 3)){
        jogada = true;
    }

    if(jogada){
        cout << "VALIDO\n";
    }else{
        cout << "INVALIDO\n";
    }

	return 0;
}
