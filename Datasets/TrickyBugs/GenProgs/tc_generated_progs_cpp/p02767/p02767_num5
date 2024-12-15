#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll n,b,x,y,i;
  cin >> n;
  ll a[n];
  b=0;
  for(i=0;i<n;i++){ // Updated loop starting index from 1 to 0
    cin >> a[i]; // Updated array index from i to i-1
    b+=a[i]; // Updated array index from i to i-1
  }
  b=b/n;
  x=0;
  y=0;
  for(i=0;i<n;i++){ // Updated loop starting index from 1 to 0
    x+=(a[i]-b)*(a[i]-b); // Updated array index from i to i-1
    y+=(a[i]-b+1)*(a[i]-b+1); // Updated array index from i to i-1
  }
  cout << min(x,y);
}