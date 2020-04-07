#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int numAluno;

	cin >> numAluno;
	int aluno[numAluno];
	float nota[numAluno];
	int posMaior;

    //BLOCO PARA INSERIR A MATRICULA E A NOTA DOS ALUNOS
	for(int i=0 ; i<numAluno ; i++){
        cin >> aluno[i] >> nota[i];
	}

    //BLOCO PARA VERIFICAR A MAIOR NOTA ENTRE OS ALUNOS
	posMaior = 0;
	for(int i=0 ; i<numAluno ; i++){
        /* verifica a maior nota e guarda sua posicao */
        if(nota[i] > nota[posMaior]){
            posMaior = i;
        }
	}


	if(nota[posMaior] >= 8){ /* verica se a nota é maior do que 8 */
        cout << aluno[posMaior] << endl;
	}else{
	    cout << "Minimum note not reached\n";
	}

	return 0;
}
