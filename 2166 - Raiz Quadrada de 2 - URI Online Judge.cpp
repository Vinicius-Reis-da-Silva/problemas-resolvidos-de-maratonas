#include<iostream>

using namespace std;

double raiz2(int n){

    if(n<0){
        return 0.0;
    }

    if(n == 0){
        return 1/2.0;
    }

    return 1/(2 + raiz2(n - 1));
}

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int vez;

	cout.precision(10);
	cout.setf(ios::fixed);

	cin >> vez;
	cout << 1 + raiz2(vez - 1) << endl;

	return 0;
}
