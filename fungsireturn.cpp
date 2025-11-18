#include <iostream>
 
using namespace std;
bool ricek(string S) {
int n = S.length();

cout<<"input S:";
cin>>S;
for (int i = 0; i < n-1; i++) {
if (S[i] <= S[i+1]) return true;
}
return false;
}