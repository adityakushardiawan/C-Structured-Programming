//Struktur Pertama (import library)
#include <iostream> //Import library
//  <iostream> fungsi library untuk melakukan input & output
// Struktur kedua (namespace)
using namespace std;
//Struktur ketiga (fungsi)
int main(){
    // Formula make variabel : tipe data variabel
    string nama;
    int callnumber;

    cout << "Meeting 1. Perkenalan C++\n";
    printf ("Text memakai printf\n");
    //Input dalam C++ with Cout & Cin
    cout << "Tuliskan nama kamu:";
    cin >> nama;
    cout << "Input Call Number:";
    cin >> callnumber;
    cout <<"My name = " << nama <<endl;
    cout <<"Call Number =" << callnumber <<endl;
    return 0;
}
// Cout = Text kalimat
// \n = Untuk Pindah baris
// cin = input kalimat (cout)
// Return =  Penutup main/program yang sudah ditulis
// Printf = Text kalimat 
// scanf = Input kalimat (printf)