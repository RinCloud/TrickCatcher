#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int n = A.length();
    deque<int> a(A.begin(), A.end());
    vector<int> b(B.begin(), B.end());

    int ans = n;
    for(int shift = 0; shift < n; shift++) {
        deque<int> temp_a(a);
        int operations = 0;
        for(int i = 0; i < n; i++) {
            if(temp_a == b) {
                ans = min(ans, operations);
                break;
            }
            if(temp_a == a && operations > 0) {
                break;
            }
            if(b[i] == 1) {
                temp_a.push_back(temp_a.front());
                temp_a.pop_front();
                a = temp_a;
                operations++;
            }
            if(temp_a == b) {
                ans = min(ans, operations);
                break;
            }
            if(temp_a == a && operations > 0) {
                break;
            }
            temp_a.push_front(temp_a.back());
            temp_a.pop_back();
            a = temp_a;
            operations++;
        }
    }
    if(ans == n) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}