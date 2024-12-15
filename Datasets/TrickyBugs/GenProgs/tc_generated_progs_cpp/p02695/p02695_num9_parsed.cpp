**TIME AND SPACE COMPLEXITY OF YOUR CODE**:<br>
TIME: O(M^N * Q)<br>
SPACE: O(Q)<br>
<>br
**REPAIRING ERROR(S) IN THE GIVEN CODE**:<br>
There is an issue with the maximum value of the array 'aa' not initialized.<br>
Replace line 13 with this:<br>
for(int i=0;i<=5;i++)aa[i]=1;aa[0]=m;<br>
and replace line 16 with this:<br>
if(aa[0]==m+1){cout<<ans<<endl;return 0;}<br>
Lastly, replace the first 15 lines of int main() with this code:<br>

  int main(){
    int n,m,q;cin>>n>>m>>q;
    ll ab[55][4];
    for(int i=0;i<q;i++)for(int j=0;j<4;j++)cin>>ab[i][j];
    for(int i=0;i<=5;i++)aa[i]=1;aa[0]=m;
  
    while(true){
      ll p=0;
      for(int i=0;i<q;i++){
        if(aa[ab[i][1]]-aa[ab[i][0]]==ab[i][2])p+=ab[i][3];
      }
      ans=max(ans,p);
      next(m,n);
      if(aa[0]==m+1){cout<<ans<<endl;return 0;}
    }
  }