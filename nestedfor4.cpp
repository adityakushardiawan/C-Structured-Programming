#include <iostream>
using namespace std;

int main() {

    cout<<"Segitiga Sama Sisi 3"<<endl;
    int n;
    cout<<"Input Jumlah N";
    cin>>n;
    // bagian atas (naik)
    for (int i = 1; i <= n; i++) {
        //for loop untuk membuat barisan dari 1 - n
        for (int j = 1; j <= i; j++) {
        // for loop untuk membuat bintang, start dari 1
            cout << "* ";
        }
        cout << endl;
    }

    // bagian bawah (turun)
    for (int i = n - 1; i >= 1; i--) {
    //for loop untuk mmebuat barisan
        for (int j = 1; j <= i; j++) {
            cout << "* ";
            // for loop untuk membuat bintang dari 1-i
        }
        cout << endl;
    }

    return 0;
}
