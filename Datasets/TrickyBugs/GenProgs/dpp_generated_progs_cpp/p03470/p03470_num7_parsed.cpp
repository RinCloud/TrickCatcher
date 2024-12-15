#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    set<int> mochiSet;
    for (int i = 0; i < N; i++) {
        int d;
        cin >> d;
        mochiSet.insert(d);
    }
    
    cout << mochiSet.size() << endl;
    
    return 0;
}
