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
  int v[101]; // Increased the size of v[] to accommodate for N up to 100
  
  for(int k=0;k<=N;k++){
    v[k]=0;
  }
  
  for(int i=1;i<=N;i++){
    tmp=i;
    for(int j=2;j<=N;j++){
      while(tmp%j==0 && tmp!=1){ // Corrected the logical operator from "&" to "&&"
        tmp=tmp/j;
        v[j]+=1;
      }
    }
  }
  
  int ans_v[76]; // Increased the size of ans_v[] to 76 to check for 75 divisors
  
  for(int i=2;i<=75;i++){ // Fixed the loop condition to include i=75
    int tmp=0;
    for(int k=0;k<=N;k++){
      if(v[k]>=i){
        tmp+=1;
      }
    }
    ans_v[i]=tmp;
  }
  
  ans=ans_v[75]+ans_v[25]*(ans_v[2]-1)+ans_v[15]*(ans_v[4]-1)+ans_v[5]*(ans_v[5]-1)*(ans_v[3]-1)/2; // Corrected the calculation
  
  cout<<ans;
  return 0;
}