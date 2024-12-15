#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

const int N = 2010;

int n, m, a[N][N];
char s[N][N];

int main() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; ++i) scanf("%s", s[i]);

  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < m - 1; ++j) {
      int cnt = 0;
      cnt += s[i][j] == '#';
      cnt += s[i][j + 1] == '#';
      cnt += s[i + 1][j] == '#';
      cnt += s[i + 1][j + 1] == '#';
      a[i][j] = ~cnt & 1;
    }
  }

  int ans = max(n, m); 
  for(int i = 0; i < n - 1; ++i) {
    for(int j = 0; j < m - 1; ++j)
      if(a[i][j]) a[i][j] += a[i - 1][j]; 

    int mx = 0; 
    stack<int> st; 
    for(int j = 0; j < m; ++j) {
      while(st.size() && a[i][st.top()] >= a[i][j]) {
        int t = st.top();
        st.pop(); 
        mx = max(mx, (a[i][t] + 1) * (st.size() ? j - st.top() : j + 1)); 
      }
      st.push(j); 
    }

    ans = max(ans, mx); 
  }
  printf("%d\n", ans);

  return 0;
}
