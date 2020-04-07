#include<iostream>
#include<iomanip>
#include<stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	string frase1, frase2, frase3;

	getline(cin , frase1);
	getline(cin , frase2);
	getline(cin , frase3);

	cout << frase1 << frase2 << frase3 << endl;
	cout << frase2 << frase3 << frase1 << endl;
	cout << frase3 << frase1 << frase2 << endl;

	for(int i=0 ; i<10 ; i++){
        if(frase1[i] == '\0'){
            break;
        }
        cout << frase1[i];
	}

	for(int i=0 ; i<10 ; i++){
        if(frase2[i] == '\0'){
            break;
        }
        cout << frase2[i];
	}

	for(int i=0 ; i<10 ; i++){
        if(frase3[i] == '\0'){
            break;
        }
        cout << frase3[i];
	}

	cout << endl;
	return 0;
}
