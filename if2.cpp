#include <iostream>
using namespace std;

int main(){
    float number1,number2,hasil;
    char aritmatika; //char = +,-,*,/

    cout <<"Aplikasi Aritmatika\n";
    cout <<"Input Number 1:";
    cin >>number1;
    cout <<"Option Operator:";
    cin >> aritmatika;
    cout <<"Input Number 2:";
    cin >>number2;

    cout <<"\n Hasil Aritmatika:";
    cout << number1 << aritmatika << number2;

    if (aritmatika =='+'){
        hasil = number1 + number2;
    } else if (aritmatika =='-'){
        hasil = number2 - number1;
    } else if (aritmatika =='*'){
        hasil = number2 * number1;
    } else if (aritmatika =='/'){
        hasil = number2 / number1;
    } else {
        cout <<"false option"<<endl;
    }
    cout << "=" <<hasil <<endl;

    return 0;
}  