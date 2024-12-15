#include <stdio.h>
#include <stdlib.h>

int main(){
  int N, i, max_i, max_v;
  scanf("%d",&N);
  int a[N];
  for(i=0; i<N; i++) {
    scanf("%d", &a[i]);
  }

  max_i = 0;
  for(i=0; i<N; i++) {
    if (a[i] >= a[max_i]) {
      max_i = i;
    }
  }

  max_v = a[max_i];
  for(i=0; i<N; i++) {
    if (i != max_i) {
      printf("%d\n", max_v);
    } else {
      int second_max_v = 0;
      for(int j=0; j<N; j++) {
        if (j != i && a[j] > second_max_v) {
          second_max_v = a[j];
        }
      }
      printf("%d\n", second_max_v);
    }
  }
}