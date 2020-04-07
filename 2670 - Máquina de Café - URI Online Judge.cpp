#include<iostream>

using namespace std;

int maqAndar(int andar[]);

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int andar[3] , tempo;

	cin >> andar[0] >> andar[1] >> andar[2];

	tempo = maqAndar(andar);

    cout << tempo << endl;

	return 0;
}

int maqAndar(int andar[]){

    int tempo;

    if((2*andar[1] >= andar[0]) && (2*andar[1] >= andar[2])){
        tempo = 2*(andar[0] + andar[2]);
	}else {
	    if(andar[0] > andar[2]){
            tempo = ( andar[1]*2 + 4*andar[2] );
	    }else{
	        tempo = ( andar[1]*2 + 4*andar[0] );
	    }
	}

    return tempo;

}
