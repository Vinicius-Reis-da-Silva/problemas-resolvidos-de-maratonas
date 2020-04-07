#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int vez;
	string curso;

	cin >> vez;

	for(int i=0 ; i<=vez ; i++){

        getline(cin , curso);

	}

	cout << "Ciencia da Computacao\n";

	return 0;
}
