#include <iostream>
using namespace std;

int main() {
    int a, d, n; 
    int total = 0; // untuk menyimpan jumlah total deret

    cout << "=== Program Deret Aritmatika ===" << endl;
    cout << "Masukkan suku pertama (a): ";
    cin >> a;
    cout << "Masukkan beda (d): ";
    cin >> d;
    cout << "Masukkan jumlah suku (n): ";
    cin >> n;

    cout << "\nDeret Aritmatika: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        total += a;   // tambahkan setiap suku ke total
        a = a + d;    // hitung suku berikutnya
    }

    cout << "\nJumlah total deret (Σ): " << total << endl;
    return 0;
}
