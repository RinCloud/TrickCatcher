#include <stdio.h>

int main(){
  int N,i,max=0,min=0;
  scanf("%d",&N);
  int a[N];
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
 	if(a[i]>max){
      max=a[i];
    }else if(a[i]>min){
      min=a[i];
    }
  }
  for(i=0;i<N;i++){
    if(a[i]==max){
      printf("%d\n",min);
    }else{
      printf("%d\n",max);
    }
  }
}