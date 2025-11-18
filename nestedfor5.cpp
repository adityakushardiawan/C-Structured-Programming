#include <iostream>
using namespace std;

int main() {
    int n = 5; // tinggi bagian tengah

    // bagian atas
    for (int i = 1; i <= n; i++) {//u/ menampilkan baris
        for (int j = n; j > i; j--) {// untuk spasi kosong j = n karena spasi banyak yang kosong
            cout << "  "; // spasi
        }
        for (int k = 1; k <= i; k++) { // untuk bintang
            cout << "* ";
        }
        cout << endl;
    }

    // bagian bawah
    for (int i = n - 1; i >= 1; i--) {// u/menamppilkan baris, n-1 biar ngga double  
        for (int j = n; j > i; j--) {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
