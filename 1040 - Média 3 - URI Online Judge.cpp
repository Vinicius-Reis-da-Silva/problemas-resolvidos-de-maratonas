#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int peso[] = { 2 , 3 , 4 , 1 };
	float nota[4] , media=0  , sNota=0 , sPeso=0 , exame=0;

	for(int i=0 ; i<4 ; i++){
        cin >> nota[i]; /* vetor para guardar todas as notas */
        sNota += nota[i]*peso[i]; /* multiplica cada respequitiva nota com seu peso e soma todas */
        sPeso += peso[i]; /* soma todos os pesos */
	}

	cout.precision(1);
	cout.setf(ios::fixed);

	media = sNota/sPeso; /* calcula a media */

	cout << "Media: " << media << endl;

	if(media >= 5.0 && media<7.0){ /* verifica se o aluno está em exame */

        cout << "Aluno em exame.\n" ;

        cin >> exame;

        cout << "Nota do exame: " << exame << endl;

        media = (media+exame)/2; /* re-calcula a media segundo a nota do exame */

        if(media < 5.0){
            cout << "Aluno reprovado.\n";
        }else{
            cout << "Aluno aprovado.\n";
        }
        cout << "Media final: " << media << endl;

	}else if(media < 5.0){
	    cout << "Aluno reprovado.\n";
	}else{
	    cout << "Aluno aprovado.\n";
	}

	return 0;
}
