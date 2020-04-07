#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	char a , b , c;

	cin >> a >> b >> c;

	cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
	cout << "A = " << b << ", B = " << c << ", C = " << a << endl;
	cout << "A = " << c << ", B = " << a << ", C = " << b << endl;

	return 0;
}
