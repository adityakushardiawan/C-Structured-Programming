#include <iostream>
using namespace std;

int main() {
cout << "1) Hitung 1 sampai 5:\n";
    for (int i = 1; i <= 5; ++i) {
        cout << i << (i < 5 ? ", " : "\n");
    }

cout << "\n6) Hitung mundur dari 10 ke 0 (step -1):\n";
    for (int k = 10; k >= 0; k -= 1) {
        cout << k << (k > 0 ? ", " : "\n");
    }

    return 0;
}