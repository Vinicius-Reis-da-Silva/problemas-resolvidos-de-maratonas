#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int caso , quanti;
	int coelho=0, rato=0, sapo=0, totCobaia=0;
	double percCoelho, percRato, percSapo;
	char animal;

	cin >> caso;

	for(int i=0 ; i<caso ; i++){

        cin >> quanti >> animal;

        totCobaia += quanti;
        if(animal == 'C'){
            coelho += quanti;
        }else if(animal == 'R'){
            rato += quanti;
        }else if(animal == 'S'){
            sapo += quanti;
        }
	}

	percCoelho = (coelho/(totCobaia*1.0))*100;
	percRato = (rato/(totCobaia*1.0))*100;
	percSapo = (sapo/(totCobaia*1.0))*100;

	cout << "Total: " << totCobaia << " cobaias\n";
	cout << "Total de coelhos: " << coelho << endl;
	cout << "Total de ratos: " << rato << endl;
	cout << "Total de sapos: " << sapo << endl;

	cout.precision(2);
	cout.setf(ios::fixed);

	cout << "Percentual de coelhos: " << percCoelho << " %\n";
	cout << "Percentual de ratos: " << percRato << " %\n";
	cout << "Percentual de sapos: " << percSapo << " %\n";

	return 0;
}
