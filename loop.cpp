#include <iostream>
using namespace std;
int main(){
//Loop Python : For Loop & While Loop
// Loop C++ : For Loop , While Loop , Do while Loop
//Counted loop (sudah tau jumlah loop)-> For Loop 
// Uncounted Loop (tidak ada nilai loop) -> while & Do While
cout <<"While Loop"<<endl;
//Formula while 
// while (condition) {
// statement;
// }
int number = 5;
while(number <=10){ //condition
    cout <<"Number ...."<<endl; //statement while
    cout << number <<endl;
    //
    number +=1; //statement inti
}
// do while= ada perulangan 1 kali sebelum masuk ke while
// Formula do while 
// do {
//  statement;
// } while(condition);
cout <<"Do While Loop"<<endl;
int number2;
cout <<"input number :";
cin >> number2;
do {
    cout <<"Number..." << number2 <<endl;
    number2 ++;
} while(number2 <= 10);
cout <<"Finish Do while Loop"<<endl;
//For Loop
// For Loop Python : for variable in iterable
// For Loop C++ : for (introduction / int;condition;ncrement/decrement) 
cout <<"For Loop"<<endl;
for(int number3 =1;number3 <=10;number3++){
    cout << number3 <<endl;
}
cout <<"Finish For Loop"<<endl;
    return 0;

}