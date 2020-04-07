#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int x , impares=0;

	cin >> x;

	while(impares<6){
        x++;
        if(x%2==1){
            cout << x << endl;
            impares++;
        }
	}

	return 0;
}
