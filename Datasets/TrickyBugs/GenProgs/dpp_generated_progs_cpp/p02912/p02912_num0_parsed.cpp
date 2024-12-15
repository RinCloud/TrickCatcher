#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end(), greater<int>());
    
    long long int total = 0;
    int num_tickets = 0;
    
    for(int i=0; i<N; i++) {
        int price = A[i];
        int discounted_price = price;
        int j = 0;
        
        while(num_tickets < M && j < num_tickets && price/2 >= discounted_price/2 + 1) {
            discounted_price = discounted_price / 2;
            num_tickets++;
            j++;
        }
        
        total += discounted_price;
    }
    
    cout << total << endl;
    
    return 0;
}