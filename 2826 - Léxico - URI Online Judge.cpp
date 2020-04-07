#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	string plv[2];
    string aux;

	cin >> plv[0] >> plv[1];

	if(plv[0] > plv[1]){
        aux = plv[0];
        plv[0] = plv[1];
        plv[1] = aux;
	}

	cout << plv[0] << endl;
	cout << plv[1] << endl;

	return 0;
}
