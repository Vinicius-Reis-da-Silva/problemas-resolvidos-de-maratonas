#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int golInter=0, golGremio=0 , numGrenal=0;
	int novoGrenal=1, inter=0 , gremio=0 , empate=0;

	while(novoGrenal == 1){

        cin >> golInter >> golGremio;

        if(golInter > golGremio){
            inter++;
        }else if(golGremio > golInter){
            gremio++;
        }else{
            empate++;
        }

        numGrenal++;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> novoGrenal;

	}

	cout << numGrenal << " grenais\n";
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;
	cout << "Empates:" << empate << endl;
	if(inter > gremio){
        cout << "Inter venceu mais\n";
	}else if(gremio > inter){
	    cout << "Gremio venceu mais\n";
	}else{
	    cout << "Nao houve vencedor\n";
	}

	return 0;
}
