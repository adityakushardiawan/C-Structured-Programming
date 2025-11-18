#include <iostream> 
using namespace std;
//Function =sub-program yang bisa digunakan kembali di dalam program itu sendiri 
// & program yang lain. 

//formula function
// void function_name() {
// isi function
// }
// int main() {
// function_name ();
//}
void function (){
  cout<<"Hello Function 1"<<endl;
}
void function2 (){
  cout<<"Ini Function 2"<<endl;
}
void area_square(){
  float side,area;
  cout <<"Input Side : (cm)";
  cin>>side;
  area = side * side ;
  cout <<"Area Square Is" << area <<endl;
}
// parameter =sebutan nilai fungsi pada fungsi ditulis after function name 
// argumen = nilai inputan fungsi saat dijalankan 
// Formula function parameter
// function_name (tipe data atribut){
// }

// function return 
// tipe data  function name(parameter){}
int harga_akhir(int harga_awal){
  return harga_awal + (harga_awal * 10/100); //harga awal + pajak 10%
}

int main()
{

  function();
 int harga_awal,harga_jual ;
 cout<<"Input Harga Awal:";
 cin>>harga_awal;
 harga_jual = harga_akhir(harga_awal);
 cout << "Product Price :"<< harga_jual<<endl;
  return 0;
}