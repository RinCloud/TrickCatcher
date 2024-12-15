#include<iostream>
using namespace std;
int main(){
	int n, x, m=0;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n-1;i++){
    	int z=a[i]+a[i+1]-x;
    	if(z>0){
    		m+=z;
    		if(a[i+1]<z){
    			a[i+1]=0;
    		}
    		else{
    			a[i+1]=a[i+1]-z;
    		}
		}
	}
	if(a[n-1]>x){
		m+=a[n-1]-x;
	}
	cout<<m<<endl;
	return 0;		
}
