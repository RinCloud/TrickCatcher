#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <sstream>
using namespace std;

int main(){
  int N;
  cin>>N;
  int tmp,ans;
  int v[N+1]; // Fixed size of v array to N+1
  for(int k=0;k<=N;++k){
    v[k]=0;
  }
  for(int i=1;i<=N;++i){
    tmp=i;
    for(int j=2;j<=N;++j){
      while(tmp%j==0 && tmp!=1){ // Fixed bitwise AND operator to logical AND operator
        tmp=tmp/j;
        v[j]+=1;
      }
      
    }
  }
  //ans 75,3-25,5-15,3-5-5;
  int ans_v[75];
  for(int i=2;i<=74;++i){ // Changed the loop condition and start point
    tmp=0;
    for(int k=0;k<=N;++k){
      if(v[k]>=i){
        tmp+=1;
      }
      ans_v[i]=tmp;
    }
  }
  ans=ans_v[74]+ans_v[24]*(ans_v[2]-1)+ans_v[14]*(ans_v[4]-1)+ans_v[4]*(ans_v[4]-1)*(ans_v[2]-2)/2;
  cout<<ans;
  return 0;
}
