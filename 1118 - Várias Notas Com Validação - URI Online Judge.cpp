#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	double nota1, nota2 , media;
	int denovo=1;

	while(denovo != 2){

        //Entradda da primeira nota
        do{
            cin >> nota1;
            if((nota1<0) || (nota1>10)){
                cout << "nota invalida\n";
            }
        }while((nota1<0) || (nota1>10)); /* repeti enquanto for menor que 0 */

        //Entrada da Segunda nota
        do{
            cin >> nota2;
            if((nota2<0) || (nota2>10)){
                cout << "nota invalida\n";
            }
        }while((nota2<0) || (nota2>10)); /* repeti enquanto for menor que 0 */

        media = (nota1 + nota2)/2;
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << "media = " << media << endl;

        do{
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> denovo;
        }while((denovo != 1) && (denovo != 2));

	}

	return 0;
}
