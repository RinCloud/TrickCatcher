#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> parent;

int find(int x) {
    if (parent[x] == x) {
        return x;
    }
    return parent[x] = find(parent[x]);
}

void merge(int x, int y) {
    int px = find(x);
    int py = find(y);
    if (px != py) {
        parent[px] = py;
    }
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    
    parent.resize(N);
    for (int i = 0; i < N; i++) {
        parent[i] = i;
    }
    
    vector<int> degree(N, 0);
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        degree[A]++;
        degree[B]++;
        merge(A, B);
    }
    
    unordered_set<int> components;
    for (int i = 0; i < N; i++) {
        components.insert(find(i));
    }
    
    for (int i = 0; i < Q; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        if (C == 0) {
            if (find(A) == find(B)) {
                degree[A]--;
                degree[B]--;
            }
        }
    }
    
    for (int i = 0; i < Q; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        if (C == 1) {
            if (degree[A] >= 2) {
                degree[A]--;
                degree[B]--;
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        if (degree[i] > 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    
    if (components.size() == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}