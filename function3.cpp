#include <iostream>
 
using namespace std;
 
void hitungLuasSegitiga(int alas, int tinggi) {
  double luas = (alas * tinggi) / 2.0;
  cout << "Area Triangle is: " << luas << endl;
}

void volumecube(int side){
    double volume = (side*side*side);
    cout << "Volume Cube is:" << volume <<endl;
}
 
int main()
{
  
  cout<<"Function & Operator"<<endl;
  cout<<"===================="<<endl;
  cout<<"Base = 5, Height = 7"<<endl;
  cout<<"Side Cube = 3"<<endl;
  cout<<"===================="<<endl;
  cout<<"Question"<<endl;
  hitungLuasSegitiga(5, 7);
  volumecube(3);
 
  return 0;
}