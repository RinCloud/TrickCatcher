#include<stdio.h>
int main(void)
{
  int a=0;
  int i;
  int sum=0;
  char s[11];
  
  scanf("%s",s);
  
  for(i=0;i<10;i++){
    if(s[i]=='A'||s[i]=='T'||s[i]=='G'||s[i]=='C')
      a++;
    else
       a=0;
    if(sum<a)
      sum=a;
  }
 
  printf("%d\n",sum);
  return 0;
}