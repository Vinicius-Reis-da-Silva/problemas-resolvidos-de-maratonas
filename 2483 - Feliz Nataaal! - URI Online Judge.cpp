#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

    int vez;
    char plv1[] = "Feliz nat";
    char plv2[] = "l!";

    cin >> vez;

    cout << plv1;

    for(int i=0 ; i<vez ; i++){
        cout << "a";
    }

	cout << plv2 << endl;

	return 0;
}
