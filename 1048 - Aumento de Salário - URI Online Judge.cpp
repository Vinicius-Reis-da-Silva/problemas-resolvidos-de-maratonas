#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	double salario=0 , percReajuste=0;
	double novoSalario=0 , reajuste=0;

	cin >> salario;

	cout.precision(2);
	cout.setf(ios::fixed);

	if((salario>0) && (salario<=400)){
        percReajuste = 0.15;
        reajuste = salario*percReajuste;
        novoSalario = salario+reajuste;

	}else if((salario>400) && (salario<=800)){

        percReajuste = 0.12;
	    reajuste = salario*percReajuste;
        novoSalario = salario+reajuste;

	}else if((salario>800) && (salario<=1200)){

        percReajuste = 0.10;
	    reajuste = salario*percReajuste;
        novoSalario = salario+reajuste;

	}else if((salario>1200) && (salario<=2000)){
        percReajuste = 0.07;
	    reajuste = salario*percReajuste;
        novoSalario = salario+reajuste;

	}else if(salario>2000){

        percReajuste = 0.04;
	    reajuste = salario*percReajuste;
        novoSalario = salario+reajuste;

	}

	cout << "Novo salario: " << novoSalario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;

    cout.precision(0);
	cout.setf(ios::fixed);


    cout << "Em percentual: " << percReajuste*100 << " %\n";

	return 0;
}
