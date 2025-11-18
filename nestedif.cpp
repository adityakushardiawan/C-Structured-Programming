#include <iostream>
using namespace std;
int main(){
    cout <<"=== Nested if ==="<<endl;
    int option,age ;
    string gender,status;
    cout<<"Choose option:"<<endl;
    cout <<"1.Female"<<endl;
    cout <<"2.Male"<<endl;
    cin >> option;
    cout <<"age:";
    cin>>age;

    // implementasi nested if
    if(option==1){
        gender = "Female";
        if(age >=12){
            status ="Remaja";
        }else {
            status="Children / anak-anak";
        }
    }else if (option==2){
        gender = "Male";
        if(age >=12){
            status ="Remaja";
        }else {
            status="Children / anak-anak";
        }
    }else {
        cout <<"False option (error)";
    }
    cout <<"=== Output ===="<<endl;
    cout <<"Anda adalah" << gender <<"yang berusia" << age << "masuk kategori" << status<<endl;
    return 0;
}
