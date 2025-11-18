#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Penjumlahan 1 + n & semua angka"<<endl;
    cout << "Masukkan nilai n: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n;  i++) {
        sum += i;
    }

    cout << "Jumlah dari 1 sampai " << n << " adalah " << sum << endl;
    return 0;
}