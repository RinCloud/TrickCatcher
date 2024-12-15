#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int P, Q, R;
    cin >> P >> Q >> R;

    int sum = P + Q + R;
    int max_val = max(P, max(Q, R));

    cout << sum - max_val << endl;

    return 0;
}