#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input Jumlah N:";
    cin>>n;

    cout<<"Pola Segitiga 2\n";
    for(int i =1; i<=n ; i++){
        for(int j = n;j >=i ; j--){
            cout<<"*";
        }
        cout<<endl; 
    }

    cout<<"Pola Segitiga 3\n";
    for(int a = 1; a <=n ; a++){
        for(int b = 1; b < a; b++){
            cout<<" ";
        }
        for(int c = n;c >= a;c--){
        cout<<"*";
    }
    cout<<endl;
    }

    cout<<"Pola Segitiga 4\n";
    for(int i = 1; i <=n ; i++){
        for(int j=n; j>i;j--){
            cout<<" ";
        }
            for(int k = 1; k<= i; k++){
                cout<<"*";
        }  
        cout<<endl; 
    }

    cout<<"Segitiga 5\n";
    for(int i = 1; i <=n ; i++){ // menjelaskan jumlah baris
        for(int j=n; j>i;j--){ //untuk mencetak spasi sebelum bintang
// Formula condition 
// j > i : 5 > 1 = 5,4,3,2 =  4 spasi
// j > i : 5 > 2 = 5,4,3 =  3 spasi
            cout<<" ";
        }
            for(int k = 1; k<=(2*i-1); k++){ // membuat jumlah bintang meningkat ganjil setiap baris
// Formula 
// 2 * i - 1 : 2 * 1 - 1 = 1
// 2 * i - 1 : 2 * 2 - 1 = 3
// 2 * i - 1 : 2 * 3 - 1 = 5

                cout<<"*";
        }  
        cout<<endl;
    }
    
    cout<<"Segitiga 6\n";
    for(int i = 1; i <=n ; i++){ // menjelaskan jumlah baris
        for(int j = 1; j < i; j++){// mencetak spasi
// j = 1 -> 1 < 1 = 0
// j 1 -> 1 < 2 = -1 atau 1 spasi
// j 1 -> 1 < 3 = -2 atau 2 spasi
            cout<<" ";
        }
        for(int k = n;k >= (2*i-n);k--){
// k = n karena output bintang sesuai baris / n
// condition : 2*i-n :
// 2*1-5 = -3 -> 5,4,3,2,1,0,-1.-2.-3 : ada 9 loop
// 2*2-5 = -3 -> 5,4,3,2,1,0,-1 : ada 7 loop
        cout<<"*";
    }
    cout<<endl;
    }

    cout<<"Segitiga 7\n";
    for(int i = 1; i <=n ; i++){
        for(int j=n; j>i;j--){
            cout<<" ";
        }
            for(int k = 1; k<=(2*i-1); k++){
                cout<<"*";
        }  
        cout<<endl;
    }
        for(int i = 2; i <=n ; i++){
        for(int j = 1; j < i; j++){
            cout<<" ";
        }
        for(int k = n;k >= (2*i-n);k--){
        cout<<"*";
    }
    cout<<endl;
    }
}
