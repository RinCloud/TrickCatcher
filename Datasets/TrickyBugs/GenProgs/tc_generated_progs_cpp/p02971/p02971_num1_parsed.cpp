#include <stdio.h>

int main(){
  int N,i;
  scanf("%d",&N);
  int a[N];
  
  // Compute maximum value in the sequence
  int max=0;
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
    if(a[i]>max){
      max=a[i];
    }
  }
  
  // Print maximum value for each A_i
  for(i=0;i<N;i++){
    if(a[i]==max){
      // Compute maximum value among the N-1 elements other than A_i
      int otherMax = 0;
      for(int j=0;j<N;j++){
        if(j != i && a[j] > otherMax){
          otherMax = a[j];
        }
      }
      printf("%d\n",otherMax);
    }else{
      printf("%d\n",max);
    }
  }
}

