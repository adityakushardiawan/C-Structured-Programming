
#include <iostream>
using namespace std;
int main(){
	// looping untuk array di c++11 keatas
	/*
		for(declarasi variabel : array){
			statemen
		}
	*/
	int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};
    // for(int i = 0; i<10;i++){
    //cout <<arrayNilai[i] <<endl;
    //}
	for(int nilai : arrayNilai){
		cout << nilai << endl;
		nilai = 1; // tidak merubah array
	}
	cout << endl;
    cout <<"===============================";
	// memanipulasi array dengan menggunakan referensi
	for(int &nilaiRef : arrayNilai){
		nilaiRef *= 2;
	}
	cout << endl;
	for(int &nilaiRef : arrayNilai){
		cout << nilaiRef << endl;
	}
	cin.get();
	return 0;
}