#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float seq=1;
	float i=3 , j=2;

	for(i=3, j=2 ; i<=39 ; i+=2 , j *= 2){
        seq += (i/j);
	}
    cout.precision(2);
    cout.setf(ios::fixed);
	cout << seq << endl;

	return 0;
}
