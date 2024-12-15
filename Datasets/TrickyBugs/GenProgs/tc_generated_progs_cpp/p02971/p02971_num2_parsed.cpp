#include <stdio.h>

int main(){
  int N,i,max=0,second_max=0;
  scanf("%d",&N);
  int a[N];
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
 	if(a[i]>max){
      second_max=max;
      max=a[i];
    }else if(a[i]>second_max){
      second_max=a[i];
    }
  }
  for(i=0;i<N;i++){
    if(a[i]==max){
      printf("%d\n",second_max);
    }else{
      printf("%d\n",max);
    }
  }
}
