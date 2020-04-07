#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso;

	cin >> caso;

	char resp[] = "gzuz";
	string pergunta;

	getline(cin , pergunta);

	while(caso>0){
        getline(cin , pergunta);
        cout << resp << endl;
        caso--;
	}

	return 0;
}
