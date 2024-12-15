#include<iostream>
using namespace std;

int main()
{
    int a, b, n, x[5], k, i, j, Ans=0, l;
    cin >> n >> a >> b;
    for(j=1;j<=n;j++) {
        k=0;
        l=j;
        
        // Initialize the sum at each iteration
        for(i=0;i<5;i++){
            x[i]=0;
        }
        
        // Calculate digit sum
        for(i=0;i<5;i++){
            if(l==0){
                break;
            }
            x[i] = l%10;
            l /= 10;
            k += x[i];
        }
        
        if(a<=k && k<=b){
            Ans+=j;
        }
    }
    printf("%d",Ans);
}
