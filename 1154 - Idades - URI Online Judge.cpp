#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	double qtdIndividuo=0, somaIdade=0, mediaIdade;
	double idade=0;

    cin >> idade;

	while(idade > 0){

        qtdIndividuo++;
        somaIdade += idade;

        cin >> idade;

	}

	mediaIdade = somaIdade/qtdIndividuo;

	cout.precision(2);
	cout.setf(ios::fixed);

	cout << mediaIdade << endl;

	return 0;
}
