#include<iostream>
#include<iomanip>
using namespace std;

int passaHora(float graus);
int passaMinu(float graus);
int passaSegu(float graus);
void mostra(int hh, int mm, int ss);
void passaVetor(int hh , int mm , int ss,int tmp[]);

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int hr , minu , segu;
	float graus, hora;

	while(cin >> graus && graus<=360){

        if(graus>=360){
            graus -= 360;
        }

        if(graus>=0 && graus<90){ /* condição p/ se dia */

            cout << "Bom Dia!!\n";

        }else if(graus>=90 && graus<180){ /* condição p/ se tarde */

            cout << "Boa Tarde!!\n";

        }else if(graus>=180 && graus<270){ /* condição p/ se noite */

            cout << "Boa Noite!!\n";

        }else if(graus>=270 && graus<360){ /* condição p/ se madrugada */

            cout << "De Madrugada!!\n";

        }

        graus += 90;
        if(graus>=360){
            graus -= 360;
        }

        hr = passaHora(graus);
        minu = passaMinu(graus - hr*15);
        segu = passaSegu((graus - hr*15)*60 - minu*15);

        mostra(hr , minu , segu);

	}

	return 0;
}

int passaHora(float graus){
    int hora = graus/15;
    return hora;
}

int passaMinu(float graus){
    int minu = (graus*60)/15;
    return minu;
}

int passaSegu(float graus){
    int segu = (graus*60)/15;
    return segu;
}

void mostra(int hh, int mm, int ss){
    int valor[6];
    char horario[9];

    passaVetor(hh , mm , ss , valor);

    for(int i=0 , j=0; i<6 ; i++){
        if(i==2 || i==4){
            horario[i+j] = ':';
            j+=1;
        }
        horario[i+j] = valor[i] + '0';
    }


    cout << horario << endl;
}

void passaVetor(int hh , int mm , int ss,int tmp[]){

    int valor[3] = {hh , mm , ss};

    for(int i=0 , j=0; i<3 ; i++ , j+=2){
        if(valor[i]<10){
            tmp[j] = 0;
            tmp[j+1] = valor[i];
        }else {
            tmp[j] = (int)valor[i]/10;
            tmp[j+1] = valor[i] - tmp[j]*10;
        }
    }
}
