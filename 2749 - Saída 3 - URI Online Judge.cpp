#include<iostream>

using namespace std;

void tracos();
void barra();
void caract(int valor);

int main()
{
	setlocale(LC_ALL,"Portuguese");

    int pula=0;

	tracos();

	for(int i=0 ; i<5 ; i++){
        if(i%2==0){
            caract(pula);
        }else{
            barra();
        }
        pula+=8;
	}

	tracos();

	return 0;
}

void tracos(){
    for(int i=0 ; i<39 ; i++){
        cout << "-";
	}
	cout << endl;
}

void barra(){
    cout << "|";
    for(int i=1 ; i<38 ; i++){
        cout << " ";
	}
	cout << "|\n";
}

void caract(int valor){

    string plv = "x = 35";
    int pula = 33-valor;

    cout << "|";
    for(int i=1 ; i<valor ; i++){
        cout << " ";
	}

	cout << plv;
    if(valor==0){
        pula--;
    }

	for(int i=1 ; i<pula ; i++){
        cout << " ";
	}
	cout << "|\n";
}
