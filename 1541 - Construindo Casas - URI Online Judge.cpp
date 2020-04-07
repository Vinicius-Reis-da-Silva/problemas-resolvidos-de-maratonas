#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int lado1=1, lado2, perc;
	int casa , terreno;
	double percTerra;

	cin >> lado1 >> lado2 >> perc;

	while(lado1!=0 && lado2!=0 && perc!=0){

        casa = lado1*lado2;
        percTerra = (casa*100)/perc;
        percTerra = sqrt(percTerra);
        terreno = (int) percTerra;

        cout << terreno << endl;

        cin >> lado1;
        if(lado1 == 0){
            break;
        }

        cin >> lado2;
        if(lado2 == 0){
            break;
        }

        cin >> perc;
        if(perc == 0){
            break;
        }
	}

	return 0;
}
