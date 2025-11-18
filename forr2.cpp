#include <iostream> //library 
using namespace std;
int main(){
    cout<<" === Program Deret Aritmatika ==="<<endl;
    // variabel u/ angka pertama,n,range jarak
    int n,a,r ; //a = angka pertama, n = jumlah angka,r= jaral
    cout<<"input jarak range angka :";
    cin >> r; // untuk memanggil variabel r
    cout<<"input Angka pertama:";
    cin >> a; // u/ memanggil variabel a
    cout<<"Jumlah angka (n):";
    cin >> n; // u/ memanggil variabel n
    cout <<"\n Deret aritmatika:";
    //Formula for loop : 
    // for (int variabel introduction;condition;increment/decrement)
    for (int i=0; i <= n ;i++){
        cout<< a << " ";
        a = a + r; // untuk menambahkan dengan range ke angka berikutnya
    }
    cout<<endl;
    // 0 karena start number di deret = 0
    // i <= n karena 0 <= n 
    // increment = ++, decrement = --
    //print ("text")
    cout <<"======================="<<endl;
    cout<<"Prime Number "<<endl;
    int n2; // n2 = variabel u/ batas angka
    cout <<"input batas angka";
    cin>>n2;
    cout<<"bilangan prima dari 2 sampai ...."<< n << "adalah:";
    for(int p = 2; p <= n2; p++){
        //boolean -> bool : true or false
        bool prime = true; //u / opsi bilangan prima
        //loop 2 u/ formula bilangan prima
        for(int j=2; j*j <= p; j++){
            // j * j adalah condition permisalan u/ mencari prime number
            if(p % j == 0){ // p % j contoh 15 % 3 == 0, 17 % 2 == 1,2,3
                prime = false;// j = 2, 2*2 <= 2
                break;
            }
        }
        if(prime)
            cout<< p << " ";    
    }
    cout << endl;
    // p = 2 , karena prime number start dari 2
    return 0;
}
