#include <iostream>
using namespace std;
int main()
{
    float number1,number2,hasil;
    string aritmatika;

    cout << " Aplikasi Kalkulator Sederhana " <<endl;
    cout << " Input Number 1 : ";
    cin >> number1;
    cout << "Option Operator:\n\n";
    cin >> aritmatika;
    cout << " Input Number 2 :";
    cin >> number2;

    cout <<"\n Hasil Aritmatika: \n\n ";
    cout << number1 << aritmatika <<number2 ;

    if (aritmatika == "penjumlahan")
    {
        hasil = number1 + number2;
    } else if (aritmatika =="Minus")
    {
        hasil = number2-number1;
    } else{
        cout <<"FALSE OPTION"<<endl;
    }       
    cout <<"=" << hasil <<endl;
}