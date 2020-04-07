#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	double salario, imposto=0;

	cin >> salario;

	if((salario > 2000 ) && (salario<=3000)){
        imposto = (salario-2000)*0.08;
	}else if((salario > 3000 ) && (salario<=4500)){
        imposto = 1000*0.08 + (salario-3000)*0.18;
	}else if( salario > 4500 ){
        imposto = 1000*0.08 + 1500*0.18 + (salario - 4500)*0.28;
	}

	cout.precision(2);
	cout.setf(ios::fixed);

	if(imposto == 0){
        cout << "Isento\n";
	}else{
	    cout << "R$ " << imposto << endl;
	}

	return 0;
}
