#include <iostream>
using namespace std;
int main(){
    float radius,area,perimeter,length,width,height,volume,surfacearea;
    cout << "====Area Circle===="<<endl;
    cout << "Input radius :";
    cin >> radius;
 
    //formula penjumlahan,pengurangan,perkalian,divide
    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;
    //Output C++
    cout << "Area Circle : " << area <<endl;
    cout << "Perimeter Circle :" << perimeter <<endl;
    cout << "===================="<<endl;
    cout <<"=== Volume & Surface Area Cuboid ===="<<endl;
    cout <<"Input Length :";
    cin >> length;
    cout <<"Input Width :";
    cin >> width;
    cout <<"Input Height :";
    cin >> height;

    volume = length * width * height;
    surfacearea = 2 * (length*width+length*height+width*height); 
    

    cout << "Volume Cuboid : " << volume <<endl;
    cout << "Surface Area Cuboid :" << surfacearea <<endl;
    return 0;
}

