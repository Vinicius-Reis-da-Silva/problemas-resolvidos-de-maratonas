#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int carta[3];

	cin >> carta[0] >> carta[1];

	if(carta[0] == carta[1]){
        carta[2] = carta[0];
	}else if(carta[0] > carta[1]){
	    carta[2] = carta[0];
	}else{
	    carta[2] = carta[1];
	}

	cout << carta[2] << endl;

	return 0;
}
