#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int X;
  cin >> X;
  int ans=1;
  
  // Update the condition in the for loop to include the limit number X itself.
  for (int i=2; i <= sqrt(X); i++){
    int x = i;
    
    // Update the condition in the while loop to include the limit number X itself.
    while (x*i <= X){
      x *= i;
    }
    ans=max(ans,x);
  }
  
  cout << ans << endl;
}
