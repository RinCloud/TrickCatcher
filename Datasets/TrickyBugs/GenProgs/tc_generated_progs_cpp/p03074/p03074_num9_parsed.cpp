#include <bits/stdc++.h>
using namespace std;

int main () {
  int n,k;
  cin>>n>>k;
  string a;
  cin>>a;
  vector<int> b(n);
  vector<int> c(n);
  int j=0;
  if (a[0]=='0') {
    j+=1;
  }
  
  for (int i=0;i<n-1;++i) {
    if (a[i]=='0' && a[i+1]=='1') {
      b[j]=i;
    }
    if (a[i]=='1' && a[i+1]=='0') {
      c[j]=i;
      j+=1;
    }
  }
  
  if (a[n-1]=='1') {
    c[j]=n-1;
  } else {
    b[j]=n-1;
    c[j]=n-1;
  }
  
  int ans=0;
  for (int l=0;l<=j;++l) {
    for (int t=0;t<=k;++t) {
    	int p=c[min(l+t,j)]-b[l]+1;
    	ans=max(ans,p);
    }
  }
  cout<<ans<<endl;
}
