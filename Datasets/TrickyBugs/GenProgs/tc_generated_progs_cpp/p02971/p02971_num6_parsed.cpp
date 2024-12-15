#include <stdio.h>

int main(){
  int N,i,max=0,max2=0;
  scanf("%d",&N);
  int a[N];
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
    if(a[i]>max){
      max2=max;
      max=a[i];
    }else if(a[i]>max2){
      max2=a[i];
    }
  }
  for(i=0;i<N;i++){
    if(a[i]==max){
      printf("%d\n",max2);
    }else{
      printf("%d\n",max);
    }
  }
}
