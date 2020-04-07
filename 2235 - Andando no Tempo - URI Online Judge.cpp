#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int a , b , c;
	bool presente = false;

	cin >> a >> b >> c;

	if(a == b || b == c || a == c){
        presente = true;
	}else if((a == b+c) || (b == a+c) || (c == a+b)){
	    presente = true;
	}

	if(presente){
        cout << "S\n";
	}else{
	    cout << "N\n";
	}

	return 0;
}
