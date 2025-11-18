#include <iostream>
using namespace std;
int main(){
// IF = 1 option
// IF / ELSE = 2 Option 
// IF, ELSE IF, ELSE = >2 option
// Formula IF C++ : IF (variabel operator math ){
// Formula IF Python : If Variabel operator;
int number,numb1,numb2,hasil;
char aritmatika;
    cout <<"Input Number:";
    cin >> number;
    if (number == 0){
        cout <<"Number 0"<<endl;
    } else if (number >= 0){
        cout <<"Positiv NUmber"<<endl;
    } else if (number <= 0){
        cout <<"Negativ Number"<<endl;
    }
    else{
        cout<<"False Option"<<endl;
    }

    cout<<"========================="<<endl;
    cout<<"Aplikasi Aritmatika"<<endl;
    cout<<"Input First Number  :";
    cin>> numb1;
    cout<<"Option Operator (+,-,*,/):";
    cin>>aritmatika;
    cout<<"Input Second Number:";
    cin>> numb2;
    //Formula Operator
    cout <<"\n Hasil Aritmatika :";
    cout << numb1 << aritmatika << numb2; //formula
    // Implementasi IF
    if (aritmatika == '+'){
        hasil = numb1 + numb2;
    }.........

    cout <<"="<<hasil<<endl;
    return 0;
}