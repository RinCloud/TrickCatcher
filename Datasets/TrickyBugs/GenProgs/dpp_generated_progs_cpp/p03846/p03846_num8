#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    
    int sum = 0;
    for(int i=0; i<N; i++) {
        sum += A[i];
    }
    
    long long int fact = 1;
    for(int i=1; i<N; i++) {
        fact = (fact * i) % MOD;
    }
    
    int count = 0;
    if(sum == 0) {
        count = fact;
    } else if(N%2 == 0) {
        int half_sum = sum / 2;
        int even_index_count = 0;
        int odd_index_count = 0;
        for(int i=0; i<N; i++) {
            if(i%2 == 0) {
                even_index_count += A[i];
            } else {
                odd_index_count += A[i];
            }
        }
        if(even_index_count == half_sum && odd_index_count == half_sum) {
            count = fact;
        }
    } else {
        int half_sum = sum / 2;
        int odd_index_count = 0;
        for(int i=1; i<N; i+=2) {
            odd_index_count += A[i];
        }
        if(odd_index_count == half_sum) {
            count = fact;
        }
    }
    
    cout << count << endl;
    
    return 0;
}