//Array Multidimensi = array yang terdiri deret dua dimensi/matriks
#include <iostream>
using namespace std;
void printarray(int * Array2, int baris, int kolom){
// pointer = yang menyimpan memori dari suatu nilai variabel/array
// pointer = *
	int index = 0;
	// Loop untuk baris
	for(int i=0 ; i < baris; i ++){
		cout<< "{";
		//Loop untuk kolom
		for(int j=0 ; j < kolom; j ++){
			cout << *(Array2+index) << " ";
			index++;
		}
		cout << "}" <<endl;
	}
}
int main(){
	//        Baris & Kolom
	int arraymd[2][2]= {5,6,7,8};
	printarray(*arraymd,2,2);
	int matriks[3][3] = {
		{1,3,7},
		{2,4,6},
		{10,11,8}
	};
	cout << " Data Pada index ke (1,2):" << matriks[1][2];
	// Formula Array Looping 
	// for(deklarasi variabel : ARRAY){
		// STATEMENT
	//	}
	int arraynilai [5] = {0,1,2,3,4};
	for (int &nilai :arraynilai){
		cout << nilai << endl;
		nilai  *= 2;
	}

	return 0;
}