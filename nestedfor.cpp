#include<iostream>
using namespace std;
int main(){
//formula nested for 
// for 1 -> for(int; condition;increment / decrement) -> for luar
//      for 2 -> for(int; condition;increment / decrement) -> for dalam
//      statement u/ for 2
// statement for 1
int row,column;
cout<<"Input Row:";
cin>>row; // -> for 1 / for luar
cout<<"Input columns";
cin>>column; // -> for 2 / for yang dalam 
// implementasi for loop
// * *
// * *
for(int i = 1;i<=row;i ++){ // for baris
    for (int c=1;c<column;c++){ //for column
        cout<<"*"; //statement column
    }
    cout<<"*"<<endl;//statement row

}

cout<<"======================="<<endl;
cout<<"Segitiga 1"<<endl;
cout<<"======================="<<endl;
int n;
cout<<"Input jumlah N (star):";
cin>>n;
//loop baris
for (int s=1;s<=n;s++){//loop nya dari 1 sampai n
//loop column
    for (int o=n;o>=s;o--){
        cout<<"*";
    }
    cout<<endl;
}
cout<<"==================="<<endl;
cout<<"Pola Segitiga 2 "<<endl;
for(int a = 1; a<=n;a++){//for baris
    for(int k=1; k< a ; k++){
        cout <<" "; //u/ output kosong
    }
    for(int b=n; b>=a;b--){ // for column
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}