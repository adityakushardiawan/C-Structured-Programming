#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Segitiga Sama Sisi 3"<<endl;
    cout <<"Input N:";
    cin >> n; // 5
    //segitiga atas
    // for 1 : untuk menampilkan baris
    for(int i = 1;i <= n; i++){
        // for 2 : untuk menampilkan *
        for (int j = 1; j <=i;j++){
            // j <= i -> 1 = 1, 1 <=2, 1<=3.......
            cout<<"* ";
        }
        cout<<endl;
    }
    //segitiga bawah
    for (int k = n -1 ; k >= 1; k--){//untuk start segitiga bawah
        for(int l =1 ; l <= k;l ++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}