#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	char letra;
	int valor = 97;

	for(int i=0 ; i<26 ; i++){
        letra = valor;
        cout << valor << " e " << letra << endl;
        valor++;
	}

	return 0;
}
