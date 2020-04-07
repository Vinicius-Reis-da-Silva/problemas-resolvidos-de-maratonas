#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

    int mes;
    string meses[] = {"January" , "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December"};

	cin >> mes;

	cout << meses[mes - 1] << endl;

	return 0;
}
