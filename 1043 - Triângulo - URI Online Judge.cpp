#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	float a=0, b=0, c=0;

    cin >> a >> b >> c;

	cout.precision(1);
	cout.setf(ios::fixed);

	if((c<a+b)&&(a<b+c)&&(b<a+c)){

        float perimetro = a+b+c;

        cout << "Perimetro = " << perimetro;
	}else{
	    float area = ((a+b)*c)/2;

	    cout << "Area = " << area;
	}

	cout << endl;

	return 0;
}
