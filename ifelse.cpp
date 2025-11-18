#include <iostream>

using namespace std;

int main(){
    int number;

    cout << "Input number:";
    cin >> number;

    if (number %2 ==0 )
    {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd"<<endl ;
    }
return 0;
}
