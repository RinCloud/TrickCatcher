#include` statement.

**REPAIRED CODE**:

```cpp
#include <iostream>

using namespace std;

int main () {
    long long n, m;
    cin >> n >> m;

    long long cnt = min(n, m / 2);
    m -= cnt * 2;
    cnt += m / 4;

    cout << cnt;
    return 0;
}