#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  // flag to check if yellow color is present
  bool hasYellow = false;
  
  for(int i=0; i<N; i++){
    string S;
    cin >> S;
    
    // check if yellow color is present
    if(S == "Y"){
      hasYellow = true;
    }
  }
  
  // check if yellow color is present
  if(hasYellow){
    cout << "Four" << endl;
  }
  else{
    cout << "Three" << endl;
  }
}
