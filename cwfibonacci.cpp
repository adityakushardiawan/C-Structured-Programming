#include<iostream>
using namespace std;

int faktorial(int o){
    if (o <= 1)
        return 1;
    else
        return o * faktorial(o-1);
    }

int main(){
 
    int m,o,count ;
    cout <<"Input";
    cin >> count;
    cout <<"Jumlah data:";
    cin >> o;

    for (int m=0; m<=o; m++){
        cout << faktorial(m) << " ";

    }
    cout << endl;
    return 0;
}