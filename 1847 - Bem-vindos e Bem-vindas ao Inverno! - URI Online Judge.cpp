#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	int temp1 , temp2 , temp3;
	int dif1, dif2;
	bool humor=false;

	cin >> temp1 >> temp2 >> temp3;

	dif1 = temp1 - temp2;
	dif2 = temp2 - temp3;

	if(dif1<0){
        dif1 = dif1*(-1);
	}
	if(dif2<0){
        dif2 = dif2*(-1);
	}

	if((temp1>temp2)&&(temp2<=temp3)){
        humor = true;
	}else if((temp2>temp1) && (temp2>=temp3)){
	    humor = false;
	}else if((temp2>temp1) && (temp3>temp2)){
	    if(dif1 > dif2){
            humor = false;
	    }else{
	        humor = true;
	    }
	}else if((temp1>temp2) && (temp2>temp3)){
	    if(dif1 > dif2){
            humor = true;
	    }else{
	        humor = false;
	    }
	}else if((temp1 == temp2) && (temp3>temp2)){
	    humor = true;
	}else{
	    humor = false;
	}

	if(humor){
        cout << ":)\n";
	}else{
	    cout << ":(\n";
	}

	return 0;
}
