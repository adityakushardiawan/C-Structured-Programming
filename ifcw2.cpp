#include <iostream>
using namespace std;
int main()
{
    int side,area,perimeter,option;
    cout <<"Area & Perimeter Square" <<endl;
    cout << " Choose Option :" <<endl;
    cout <<"1. Perimeter " <<endl;
    cout << "2. Area" <<endl;
    cout << "Perimeter (1) / Area (2)?:" <<endl;
    cin>>option;

    if (option==1)
    {
        cout<<endl;
        cout<<"Input Side:";
        cin>>side;
        cout<<endl;

        perimeter = side*4;
        cout<<"Perimeter Square ="<<perimeter;
    } else if(option==2){
        cout<<endl;
        cout<<"Input Side:";
        cin>>side;
        cout<<endl;

        area = side*side;
        cout<<"Area Square ="<<area;
    }
    else{
        cout << "False Option!!!!!"<<endl;
    }
    return 0;
}