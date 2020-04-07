#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int n;
	float x , y , resul;

	cin >> n;

	for(int i=0 ; i<n ; i++){

        cin >> x >> y;
        if(y == 0){

            cout << "divisao impossivel\n";

        }else{

            cout.precision(1);
            cout.setf(ios::fixed);

            resul = x/y;
            cout << resul << endl;

        }

	}

	return 0;
}
