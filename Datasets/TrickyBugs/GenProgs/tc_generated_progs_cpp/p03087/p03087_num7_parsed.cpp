#include <iostream>
#include <string>
using namespace std;

int main(){
    int N,Q;
    string S;
    cin >> N >> Q;
    cin >> S;
    int code[N];
    int nan=0;
    for(int i=0;i<N-1;i++){
        if(S[i]=='A'&&S[i+1]=='C'){
            nan++;
        }
        code[i]=nan;
    }
    code[N-1]=code[N-2];

    for(int i=0;i<Q;i++){
        int l,r;
        cin >> l >> r;
        cout << code[r-2]-code[l-1] << endl;
    }
    
}
