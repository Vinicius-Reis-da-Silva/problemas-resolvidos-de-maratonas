#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int dist;
	int ponto;

	cin >> dist;

	if(dist<=800){
        ponto = 1;
	}else if(dist>800 && dist<=1400){
	    ponto = 2;
	}else if(dist>1400 && dist<=2000){
	    ponto = 3;
	}

	cout << ponto << endl;

	return 0;
}
