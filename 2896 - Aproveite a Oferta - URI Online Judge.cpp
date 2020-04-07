#include<iostream>

using namespace std;

int main(){

    int caso , numComp , numTroc;
    int vale=0;
    cin >> caso;

    for(int i=0 ; i<caso ; i++){

        cin >> numComp >> numTroc;
        vale = numComp/numTroc;
        vale += (numComp - (vale*numTroc));
        cout << vale << endl;

    }

}
