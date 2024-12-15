#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> b(N);
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }
    
    vector<int> a(N, -1);

    for (int i = 0; i < N; i++)
    {
        for (int j = i; j >= b[i]; j--)
        {
            if (a[j] == -1)
            {
                a[j] = b[i];
            }
            else
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (a[i] == -1)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << endl;
    }
    
    return 0;
}
