#include<iostream>
using namespace std;

int main(){
    cout<<"Diamond tengah kosong"<<endl;
    int n;
    cout<<"Input Jumlah N:";
    cin>>n;
    for(int i = 1; i <=n ; i++){
        for(int j=n; j>i;j--){
            cout<<" "; //u/ luar diamond
        }
            for(int k = 1; k<=(2*i-1); k++){
                //kita kasih if , kalau true -> *, else " "
                if (k == 1 || k== (2*i-1))// u/ menampilkan *
                    cout<<"*";
                else
                    cout<<" "; //u/ di dalam diamond
        }  
        cout<<endl;
    }
        for(int i = 2; i <=n ; i++){
        for(int j = 1; j < i; j++){
            cout<<" ";
        }
        for(int k = n;k >= (2*i-n);k--){
            if (k == n || k== (2*i-n))// u/ menampilkan *
                cout<<"*";
            else
                cout<<" ";
    }
    cout<<endl;
    }
    return 0;
}