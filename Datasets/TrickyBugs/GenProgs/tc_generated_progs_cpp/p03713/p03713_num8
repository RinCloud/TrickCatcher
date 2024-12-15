#include <iostream>
using namespace std;
int main(){
    int H,W;
    cin >> H >> W;
    if(H%3==0 || W%3==0){
        cout << 0 << endl;
    }else{
        long long slashH = H/3+((H%3==1&&W%2==0) ? 0:1);
        long long SmaxH = W*slashH;
        long long HH = (H-slashH)/2*W;
        long long HW = (W/2)*(H-slashH);
        long long slashW = W/3+((W%3==1&&H%2==0) ? 0:1);
        long long SmaxW = H*slashW;
        long long WH = (W-slashW)*(H/2);
        long long WW = (W-slashW)/2*H;

        long long maxH = max(SmaxH, max(HH, HW));
        long long minH = min(SmaxH, min(HH, HW));
        long long maxW = max(SmaxW, max(WH, WW));
        long long minW = min(SmaxW, min(WH, WW));

        cout << min(abs(maxH - minW), abs(maxW - minH)) << endl;
    }
    return 0;
}