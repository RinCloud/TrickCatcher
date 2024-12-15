#include <stdio.h>

int main(){
  int N,i,max=0,min=0;
  scanf("%d",&N);
  int a[N];
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
    if(a[i]>max){
      max=a[i];
    }
  }
  for(i=0;i<N;i++){
    if(a[i]==max){
      min = 0;
      for (int j = 0; j < i; j++) {
        if(a[j]>min) {
          min = a[j];
        }
      }
      for (int j = i+1; j < N; j++) {
        if(a[j]>min) {
          min = a[j];
        }
      }    
      printf("%d\n",min);
    } else {
      printf("%d\n",max);
    }
  }
}