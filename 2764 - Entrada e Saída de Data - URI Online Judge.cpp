#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");


	char data[8];


	cin >> data;

	cout << data[3] << data[4] << data[5] << data[0] << data[1] << data[2] << data[6] << data[7] << endl;
    cout << data[6] << data[7] << data[5] << data[3] << data[4] << data[2] << data[0] << data[1] << endl;

	data[2] = '-';
	data[5] = '-';

	for(int i=0 ; i<8 ; i++){
        cout << data[i];
	}
	cout << endl;

	return 0;
}
