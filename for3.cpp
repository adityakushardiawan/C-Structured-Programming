#include <iostream>
using namespace std;

int main() {
    int n,n2;

    cout << "Masukkan batas deret bilangan ganjil: ";
    cin >> n;

    cout << "Deret bilangan ganjil sampai " << n << " adalah: " << endl;

    for (int i    = 1; i <= n; i++) {
        if (i % 2 != 0) {  // cek apakah i ganjil
            cout << i << " ";
        }
    }

    cout << endl;

    
    cout << "Masukkan batas deret bilangan genap: ";
    cin >> n2;

    cout << "Deret bilangan genap sampai " << n << " adalah: " << endl;

    for (int i = 1; i <= n2; i++) {
        if (i % 2 == 0) {  // cek apakah i ganjil
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
