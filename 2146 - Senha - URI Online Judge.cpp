#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int senha;

	while(cin >> senha){
        cout << senha-1 << endl;
	}

	return 0;
}
