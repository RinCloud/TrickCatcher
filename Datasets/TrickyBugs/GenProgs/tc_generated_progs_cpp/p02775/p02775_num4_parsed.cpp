#include <iostream>
#include <string>
using namespace std;

string n;
int m = 0, w = 0, t = 0;

int main()
{
    cin >> n;

    int j = n.size();

    for (int i = j - 1; i >= 0; i--) {

        int k = n[i] - '0' + w;

        if (k < 5) {
            m += k - t;
            w = 0;
            t = 0;
        }
        else {
            m += 10 - k;
            w = 1;
            t = 1;
        }
    }

    if (t == 1)
        w = 0;

    cout << m + w << endl;

    return 0;
}
