#include <iostream>
#include <array>
#include <algorithm>


const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
	std::cout << "Array: ";
	for(int &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}
int main(){
	std::array <int, arraySize> angka = {9,4,6,7,8,1,3,2,5,0};
	

	printArray(angka);
	//printArray(huruf);

	std::cout << std::endl;

	std::sort(angka.begin(), angka.end());
	printArray(angka);
	


	std::cin.get();
	return 0;
}