#include<iostream>

using namespace std;

double raiz10(int n){

    if(n<0){
        return 0.0;
    }
    if(n == 0){
        return 1/6.0;
    }

    return 1/(6 + raiz10(n - 1));
}
int main()
{
	setlocale(LC_ALL,"Portuguese");

	int vezes;

	cout.precision(10);
	cout.setf(ios::fixed);

	cin >> vezes;
	cout << 3.0 + raiz10(vezes - 1) << endl;


	return 0;
}
