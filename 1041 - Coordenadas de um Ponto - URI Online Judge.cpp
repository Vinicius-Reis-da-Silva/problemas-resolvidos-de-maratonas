#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float x , y;

	cin >> x >> y;

	cout.precision(1);
	cout.setf(ios::fixed);

	if(x==0 && y==0){
        cout << "Origem\n";
	}else{
	    if(x==0){
            cout << "Eixo Y\n";
	    }else if(y==0){
	        cout << "Eixo X\n";
	    }else{
	        if(x>0 && y>0){
                cout << "Q1\n";
	        }
	        if(x<0 && y>0){
                cout << "Q2\n";
	        }
	        if(x<0 && y<0){
                cout << "Q3\n";
	        }
	        if(x>0 && y<0){
                cout << "Q4\n";
	        }
	    }
	}

	return 0;
}
