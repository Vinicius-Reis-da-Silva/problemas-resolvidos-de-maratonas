#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso;
	int raio1, raio2, raioConduite;

	cin >> caso;

	for(int i=0 ; i<caso ; i++){

        cin >> raio1 >> raio2;
        raioConduite = raio1 + raio2;
        cout << raioConduite <<"\n";
	}

	return 0;
}
