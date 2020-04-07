#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int tomadas=0;
	int fio[4];

	for(int i=0 ; i<4 ; i++){

        cin >> fio[i];
        tomadas += fio[i];

	}

	tomadas -= 3;

	cout << tomadas << endl;

	return 0;
}
