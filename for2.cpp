#include <iostream>
using namespace std;

int main() {
    int a, d, n; // a = suku pertama, d = beda, n = jumlah suku
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
        a = a + d; // rumus suku berikutnya
    }
    cout << endl;
    return 0;
}
