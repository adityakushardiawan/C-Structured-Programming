#include <iostream>
#include <array>
using namespace std;
int main(){
	// Template Library Array
	// Array <int, jumlah array> Nama Array 
	array<int,11> nilai;
	cout << "Program menampilkan grafik jumlah nilai siswa" << endl << endl;
	for(int i = 0; i < 11 ; i++){
		cout << "jumlah siswa dengan nilai ";
		if(i == 0){
			cout << "0-9: ";
		}else if(i == 10){
			cout << "100: ";
		}
		else{
			cout << i*10 << "-" << (i*10) + 9 << ": ";
		}
		cin >> nilai[i];
	}
	cout << endl;      
	cout << "Grafik nilai" << endl << endl;
	for(int i = 0; i < 11 ; i++){
		if(i == 0){
			cout << "0-9  : ";
		}else if(i == 10){
			cout << "100  : ";
		}
		else{
			cout << i*10 << "-" << (i*10) + 9 << ": ";
		}
		for(int bintang = 0; bintang < nilai[i]; bintang++){
			cout << "*";
		}
		cout <<endl;
	}
	return 0;
}