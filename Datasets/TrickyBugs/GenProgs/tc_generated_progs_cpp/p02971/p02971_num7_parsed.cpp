#include <stdio.h>

int main(){
  int N,i;
  scanf("%d",&N);
  int a[N];
  for(i=0;i<N;i++){
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<N;i++){
    int max = -1;
    for(int j=0;j<N;j++){
        if(j == i) continue;
        if(a[j]>max){
            max=a[j];
        }
    }
    printf("%d\n",max);
  }
}