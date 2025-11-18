#include <iostream>
 
using namespace std;
 
int main()
{
 cout << "== Deret  Angka Berdasarkan Kuadrat / Pangkat 2  ==" << endl;
 cout << "===================================================" << endl;
 cout << endl;
 
 int jumlah_deret,i;
 
 cout << "Jumlah deret yang diinginkan: ";
 cin >> jumlah_deret;
 
 cout << endl;
 for (i=1;i<=jumlah_deret;i++) {
    cout << i*i << " ";
 }
 
 cout << endl;
 return 0;
}