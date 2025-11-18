#include<iostream>
using namespace std;
int main(){
    
    cout<<"Segitiga 2"<<endl;
    int n;
    cout<<"Input Jumlah N";
    cin>>n;

    for(int i=1 ; i <=n; i++ ){
        for(int j=n; j>=1;j--){ // j = n karena baris awal dimulai dari n
        cout<<"*";
        }
        cout<<endl;
    }

    cout<<"Segitiga 3"<<endl;
    for(int a = 1; a <=n ; a++){
        //loop 2 u/ empty 
        for(int b = 1; b < a ; b++ ) {//increment
        cout<<" ";
        for(int c = n; c>=a ; c--){
            cout<<"*";
        }
        cout<<endl;
    }

}
    cout<<"Segitiga Sama Sisi 1"<<endl;
    // 3 For Loop 
    // For 1 : u/ membuat n baris -> for luar
    // For 2 : u/ membuat spasi nilai kosong -> for dalam
    // For 3 : u/ membuat star -> for dalam
    for(int w = 1; w <=n; w++){ //for : u/ membuat n baris
        for(int y=n; y>w;y--){ // u/ membuat spasi kosong
        //condition u/ spasi
//  y > w : 5 > 1 = 5,4,3,2 -> total loop = 4 
// y > w : 5 > 2 = 5,4,3 -> total loop = 3
// y > w : 5 > 5 = 0
        cout <<" ";
        }
        for (int z= 1;z<=(2*w-1) ; z++){
        // condition u/ star : va]riabel w
        // (2*w-1) 
        // 2*1-1 = 1
        // 2*2-1 = 3
        // 2*5-1 = 9
        cout <<"*";
        }
        cout<<endl;
    }
}