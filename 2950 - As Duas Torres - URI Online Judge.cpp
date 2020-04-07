#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int dist=0, x=0, y=0;
	double icm=0;

	cin >> dist >> x >> y;

	icm = (dist*1.00)/(x+y);

	cout.precision(2);
	cout.setf(ios::fixed);

	cout << icm << endl;

	return 0;
}
