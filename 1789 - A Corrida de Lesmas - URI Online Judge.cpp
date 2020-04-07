#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int numLesma;

	while(cin >> numLesma){

        int lesma[numLesma];
        int pos=0;

        for(int i=0 ; i<numLesma ; i++){
            cin >> lesma[i];
            if(lesma[i] > lesma[pos]){
                pos = i;
            }
        }

        if(lesma[pos] >= 20){
            cout << "3\n";
        }else if((lesma[pos]>=10) && (lesma[pos] < 20)){
            cout << "2\n";
        }else{
            cout << "1\n";
        }

	}

	return 0;
}
