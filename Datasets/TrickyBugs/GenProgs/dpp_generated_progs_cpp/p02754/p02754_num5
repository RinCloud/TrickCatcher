#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long N, A, B;
    cin >> N >> A >> B;

    long long total_balls = 0;
    long long num_blue_balls = 0;

    for(int i = 0; i < N; i++){
        if(total_balls < A + B){
            total_balls++;
            if(i < A){
                num_blue_balls++;
            }
        }
    }
    
    cout << num_blue_balls << endl;
    
    return 0;
}