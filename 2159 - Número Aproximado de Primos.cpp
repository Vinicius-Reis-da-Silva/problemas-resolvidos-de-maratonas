#include<iostream>
#include<math.h>
#define up 1.25506

using namespace std;

int main(){

    double maxi , mini;
    double nPrimo;

    cin >> nPrimo;

    mini = nPrimo/log(nPrimo);
    maxi = up*mini;

    cout.precision(1);
    cout.setf(ios::fixed);

    cout << mini << " " << maxi << endl;

    return 0;
}
