#include<iostream>

using namespace std;

void imprimir(double x , double y);

int main()
{
	setlocale(LC_ALL,"Portuguese");

	double x=234.345 , y=45.698;

	imprimir(x ,y);

    cout << scientific << x << " - " << y << endl; /* COLACA NA NOTAÇÃO CIENTIFICA COM BASE "e" */
    cout << uppercase << x << " - " << y  << endl; /* COLACA NA NOTAÇÃO CIENTIFICA COM BASE "E" */

    cout.unsetf(ios::scientific); /* RETIRA DA NOTAÇÃO CIENTIFICA */

    cout.precision(3);
	cout.setf(ios::fixed);
    cout << x << " - " << y << endl;
    cout << x << " - " << y << endl;

	return 0;
}

void imprimir(double x , double y){

    cout.precision(6);
	cout.setf(ios::fixed);

	cout << x << " - " << y << endl;

	for(int i=0 ; i<4 ; i++){
        cout.precision(i);
        cout << x << " - " << y << endl;
	}
}
