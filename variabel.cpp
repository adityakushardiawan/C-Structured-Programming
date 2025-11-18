//import library
#include <iostream>
//iostream = library u/ input & output
using namespace std;

int main(){
// input / output / variabel / formula
// cout = output / print
// Tipe data / jenis data
// number = int
// decimal_number = float,double
// letter,huruf,text = string
// symbol = char
// Formula make variabel
// tipe data  nama variabel;
    string name;
    string callnumber;
    float height;
    cout << "Meeting 1, perkenalan variabel C++"<<endl;

    cout <<"==================================="<<endl;
    cout <<"Input Fullname :"; //cout untuk output
    getline(cin,name);
    //cin >> name; // cin untuk memanggil variabel / input
    cout <<"Input Call number:";
    cin >> callnumber;
    cout <<"Input Height (cm):";
    cin >> height;
    
    //output
    cout << "My name" << name <<endl;
    cout << "Call number" << callnumber <<endl;
    cout << " Height " << height <<endl;
    return 0;
}
