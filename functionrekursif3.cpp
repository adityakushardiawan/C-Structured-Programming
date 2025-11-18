#include<iostream>
using namespace std;

int cat(int persia){
    if(persia>10){
    }else{
        return persia+cat(persia+3);
    }
}
int fish(int shark){
    if(shark<1){
        return 3;
    }else{
        return cat(shark) + fish(shark-1);
    }
}
int main(){
  cout <<fish(5);

}
