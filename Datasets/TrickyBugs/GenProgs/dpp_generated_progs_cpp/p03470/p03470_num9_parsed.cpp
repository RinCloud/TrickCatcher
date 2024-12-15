#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> diameters;
    for (int i = 0; i < N; i++) {
        int d;
        cin >> d;
        diameters.insert(d);
    }
    
    cout << diameters.size() << endl;

    return 0;
}