#include<iostream>//library u/ input & output
using namespace std; // koneksi library dengan main 
// std::cout<<"text 1";
// std::cin>>text;
// std = standard 
int main(){ //tempat menulis code
// multiplication = * , division = /, modulo = % 
    float number1,number2,addition,substraction,multiplication,division; 
    cout << "Input Number 1:";
    cin >> number1;
    cout << "Input Number 2:";
    cin >> number2;
    // formula 
    addition = number1 + number2 ;
    substraction = number2 - number1;
    multiplication = number2 * number1;
    division = number2 / number1;
    //output 
    cout <<"Hasil Number 1 + Number 2 :" << addition <<endl;
    cout <<"Hasil Number 2 - Number 1 :" << substraction <<endl;
    cout <<"Hasil Number 2 * Number 1 :" << multiplication <<endl;
    cout <<"Hasil Number 2 / Number 1 :" << division <<endl;
    return 0; //end program 
}