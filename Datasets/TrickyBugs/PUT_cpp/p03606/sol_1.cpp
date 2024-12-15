#include<iostream>
using namespace std;
int main(){
    int n,l,r,m;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>l>>r;
    m+=r-l+1;
	}
	cout<<m<<endl;
	return 0;
}