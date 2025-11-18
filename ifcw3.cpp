#include <iostream>
using namespace std;
int main()
{
    float radius,area,perimeter,option;
    cout <<"Area & Perimeter Circle" <<endl;
    cout << " Choose Option :" <<endl;
    cout <<"1. Perimeter " <<endl;
    cout << "2. Area" <<endl;
    cout << "Perimeter (1) / Area (2)?:" <<endl;
    cin>>option;

    if (option==1)
    {
        cout<<endl;
        cout<<"Input Radius:";
        cin>>radius;
        cout<<endl;

        perimeter = 2* 3.14 * radius ;
        cout<<"Perimeter Circle ="<<perimeter;
    } else if(option==2){
        cout<<endl;
        cout<<"Input radius:";
        cin>>radius;
        cout<<endl;

        area = 3.14 * radius * radius;
        cout<<"Area Circle ="<<area;
    }
    else{
        cout << "False Option!!!!!"<<endl;
    }
    return 0;
}