#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	double nota1=-1, nota2=-1;
	double media;

	cout.precision(2);
	cout.setf(ios::fixed);

	while(nota1<0 || nota1>10){

        cin >> nota1;

        if(nota1<0 || nota1>10){
            cout << "nota invalida\n";
        }
	}

	while(nota2<0 || nota2>10){

        cin >> nota2;

        if(nota2<0 || nota2>10){
            cout << "nota invalida\n";
        }
	}

	media = (nota1 + nota2)/2;

	cout << "media = " << media << endl;

	return 0;
}
