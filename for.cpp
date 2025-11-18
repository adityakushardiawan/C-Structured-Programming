#include <iostream>
using namespace std;
int main(){
// FORMULA for loop:
//for (intro / int;condition;increment/decrement)
cout <<"Hitung angka 1 - 10\n";
    for(int i = 1; i<=10;i++){
        cout << i << (i < 10 ?",":"\n"); 
    }
cout<<"Angka 10 - 1\n";
    for(int i =10; i >=0; i-=1){
        cout << i << (i > 0 ?",":"\n");    
    }

//for dengan if
int n;
cout <<"deret bilangan ganjil :"<<endl;
cout <<"Input batas deret [n]:";
cin >> n;
cout<<"Deret bilangan ganjil sampai " << n <<"adalah:"<<endl;
for (int c = 1; c <= n; c++){
    if (c % 2 != 0){
        cout << c << " ";
    }
}
    return 0;
}