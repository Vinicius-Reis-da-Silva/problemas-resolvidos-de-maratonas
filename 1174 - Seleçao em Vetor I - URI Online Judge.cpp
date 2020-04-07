#include<iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float valor[100];

	for(int i=0 ; i<100 ; i++){
        cin >> valor[i];
	}

    cout.precision(1);
    cout.setf(ios::fixed);

	for(int i=0 ; i<100 ; i++){
        if(valor[i]<=10){
            cout << "A[" << i << "] = " << valor[i] << endl;
        }
	}

	return 0;
}
