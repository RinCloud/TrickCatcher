#include <iostream>
#include <unordered_set>
#include <deque>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    unordered_set<int> nums;
    deque<int> s;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        nums.insert(num);
    }

    for (int i = 0; i < N * K; i++) {
        int num = i % N;
        if (nums.find(num) != nums.end()) {
            while (!s.empty() && s.back() != num) {
                s.pop_back();
            }
            if (!s.empty() && s.back() == num) {
                s.pop_back();
            }
        } else {
            s.push_back(num);
        }
    }

    for (int num : s) {
        cout << num << " ";
    }

    return 0;
}