#include<iostream>

using namespace std;

void bateTente(int caso);

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso;

	while (cin >> caso){
        bateTente(caso);
	}


	return 0;
}

void bateTente(int caso){

    double tempo[caso] , melhor=999999;

	cout.precision(2);
	cout.setf(ios::fixed);

	for(int i=0 ; i<caso ; i++){

        cin >> tempo[i];
        if(tempo[i]<melhor){
            melhor = tempo[i];
        }

	}

	cout << melhor << endl;
}
