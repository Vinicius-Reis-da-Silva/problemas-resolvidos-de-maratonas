#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int x , y;

	cin >> x >> y;

	while((x !=0) && (y != 0)){

        if(x>0 && y>0){
            cout << "primeiro\n";
        }
        if(x<0 && y>0){
            cout << "segundo\n";
        }
        if(x<0 && y<0){
            cout << "terceiro\n";
        }
        if(x>0 && y<0){
            cout << "quarto\n";
        }
        cin >> x >> y;

	}

	return 0;
}
