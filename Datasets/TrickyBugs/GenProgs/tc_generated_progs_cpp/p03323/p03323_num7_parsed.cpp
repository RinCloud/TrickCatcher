#include<bits/stdc++.h>

using namespace std;

int main(){
  int A, B; 
  cin>>A>>B;
  if(abs(A-B) <= 1 && A <= 8 && B <= 8) 
    cout<<"Yay!";
  else 
    cout<<":(";
  return 0;
}
