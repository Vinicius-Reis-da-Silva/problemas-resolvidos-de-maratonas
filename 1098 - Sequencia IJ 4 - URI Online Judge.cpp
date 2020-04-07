#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float i=0;

	do{
        for(int j=1 ; j<=3 ; j++){
            cout << "I=" << i << " J=" << j+i << endl;
        }
        i += 0.2;
	}while(i<2.1);

	return 0;
}
