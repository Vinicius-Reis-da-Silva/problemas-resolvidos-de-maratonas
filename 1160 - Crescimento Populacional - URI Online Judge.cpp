#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int cidade_A , cidade_B , tempo=0 , teste;
	float cresc_A , cresc_B;

	cin >> teste;
	for(int i=0 ; i<teste ; i++){

        cin >> cidade_A >> cidade_B;
        cin >> cresc_A >> cresc_B;

        while(cidade_B >= cidade_A && tempo<=100){
            cidade_A += (int)(cidade_A*(cresc_A/100));
            cidade_B += (int)(cidade_B*(cresc_B/100));
            tempo++;
        }

        if(tempo>100){
            cout << "Mais de 1 seculo.\n";
        }else{
            cout << tempo << " anos.\n";
        }
        tempo=0;
	}
	return 0;
}
