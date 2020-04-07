#include<iostream>

using namespace std;

bool triangulo(int a , int b , int c);

int main()
{
	setlocale(LC_ALL,"Portuguese");


    int a, b, c, d;
    bool strake=false;

    cin >> a >> b >> c >> d;

    strake=(triangulo(a , b , c) || triangulo(a , b , d) || triangulo(a , c , d) || triangulo(b , c , d));

	if(strake==true){
        cout << "S" << endl;
	}else{
	    cout << "N" << endl;
	}

	return 0;
}

//FUNÇÃO QUE AVALIA SE OS VALORES FORMA UM TRIÂNGULO
bool triangulo(int a , int b , int c){
    return ((a<b+c)&&(b<a+c)&&(c<a+b));
}

