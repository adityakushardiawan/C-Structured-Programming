#include<iostream>
using namespace std;

int ayam(int jago){
    if(jago>8){
    }else{
        return jago+ayam(jago+2);
    }
}
int bebek(int itik){
    if(itik<=1){
        return 2;
    }else{
        return ayam(itik) + bebek(itik-1);
    }
}
int main(){
  cout <<bebek(3);

}
