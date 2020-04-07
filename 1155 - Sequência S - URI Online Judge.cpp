#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	double cont=1, seq = 0;

	while(cont<=100){
        seq += 1/cont;
        cont++;
	}

	cout.precision(2);
	cout.setf(ios::fixed);

	cout << seq << endl;

	return 0;
}
