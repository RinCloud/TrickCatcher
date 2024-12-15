#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<int> likes;
vector<int> color;
int result = 0;

void dfs(int node, int parent, int distance) {
    if (likes[node] == 1) {
        color[node] = distance;
    }
    
    int cnt = 0;
    for (int child : graph[node]) {
        if (child == parent) {
            continue;
        }
        dfs(child, node, distance + 1);
        if (color[child] != -1 && color[child] <= distance) {
            cnt++;
        }
    }
    
    if (cnt == 0 && (likes[node] == 1 || distance == 0)) {
        result++;
    }
}

int main() {
    int N;
    cin >> N;
    
    graph.resize(N + 1);
    likes.resize(N + 1);
    color.resize(N + 1, -1);
    
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    string s;
    cin >> s;
    
    for (int i = 0; i < N; i++) {
        likes[i+1] = s[i] - '0';
    }
    
    dfs(1, 0, 0);
    
    cout << result << endl;
    
    return 0;
}