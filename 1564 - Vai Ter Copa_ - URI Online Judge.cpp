#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int reclama=0;

	while(cin >> reclama){
        if(reclama == 0){
            cout << "vai ter copa!\n";
        }else{
            cout << "vai ter duas!\n";
        }
	}

	return 0;
}
