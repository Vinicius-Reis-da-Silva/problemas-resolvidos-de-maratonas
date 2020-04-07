#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int pum=1;
	int n;

	cin >> n;

	for(int i=0 ; i<n ; i++){
	    for(int j=pum ; j < pum+3 ; j++){
            cout << j << " ";
	    }
	    cout << "PUM\n";
	    pum += 4;
	}


	return 0;
}
