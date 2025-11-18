 //Operator Logic AND,OR,Negasi
#include <iostream>
using namespace std;

int main (){
    int a = 1; //True
    int b = 0; //False
    bool hasil; //Boolean (tipe data true / false)

    cout <<" a = " << a <<endl;
    cout <<" b = " << b <<endl;

    //AND Logic
    hasil = a && b;
    cout <<"a && b" << hasil <<endl;
    //OR Logic
    hasil = a || b;
    cout <<"a || b" << hasil <<endl;
    //Negasi Logic
    cout << "!a =" << !a << endl;

    return 0 ;
}
