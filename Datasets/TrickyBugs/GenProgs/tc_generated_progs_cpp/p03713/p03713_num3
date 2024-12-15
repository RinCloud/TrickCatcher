#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
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
        cout << min(abs(SmaxH-max(HW,HH)),abs(SmaxW-max(WH,WW))) << endl;
    }
    return 0;
}