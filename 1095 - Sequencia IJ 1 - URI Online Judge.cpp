#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int x=1 , y=60;

	while(y >= 0){
        cout << "I=" << x << " J=" << y << endl;
        x += 3;
        y -= 5;
	}


	return 0;
}
