#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso;
    string frase;
    string resp = "I am Toorg!";

    cin >> caso;

    getline(cin , frase);

	for(int i=0 ; i<caso ; i++){

        getline(cin , frase);
        cout << resp << endl;

	}

	return 0;
}
