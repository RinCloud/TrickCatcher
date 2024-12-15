#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// Function to find elements of s after Snuke finished the operations
vector<int> findElementsS(int N, ll K, vector<int> A)
{
    vector<int> s;
    int n = A.size();
    int a[2*n], p[2*n], f[2*n];
    
    // Initialize arrays
    for(int i=0; i<2*n; i++)
    {
        f[i] = 2*n;
        p[i] = -1;
    }
    
    // Find f and p arrays
    for(int i=0; i<n; i++)
    {
        a[i] = A[i]-1;
        
        // If p[a[i]] already exists, update f[p[a[i]]] value
        if(p[a[i]] >= 0)
            f[p[a[i]]] = i;
        
        // Update p[a[i]] value
        p[a[i]] = i;
        
        // If p[a[i]] already exists, update f[p[a[i]]] value
        if(p[a[i]] >= 0)
            f[p[a[i]]] = i+n;
        
        // Update p[a[i]] value
        p[a[i]] = i+n;
    }
    
    int t = 0;
    int d = 0;
    
    // Perform operations till break condition is met
    while(true)
    {
        // Case when f[t] is equal to n-1
        if(f[t] == (n-1))
        {
            d++;
            break;
        }
        
        // Case when f[t] is equal to 2n-1
        else if(f[t] == (2*n-1))
        {
            d++;
            s.push_back(n);
            d++;
            break;
        }
        
        // Case when f[t] >= n
        else if(f[t] >= n)
        {
            d++;
            t = f[t] + 1 - n;
            s.push_back(t);
        }
        
        // Case when f[t] < n
        else
        {
            t = f[t] + 1;
        }
    }
    
    // Reduce value of K
    K--;
    K %= d;
    
    // Find elements of s after Snuke finished the operations
    for(int i=s[K]; i<n; i++)
    {
        if(f[i] < n)
        {
            i = f[i];
            continue;
        }
        s.push_back(a[i]+1);
    }
    
    return s;
}

// Driver code
int main()
{
	// Read input
	int N;
	ll K;
	cin >> N >> K;
	vector<int> A(N);

	for(int i=0; i<N; i++)
	{
		cin >> A[i];
	}

    // Function call to find elements of s after Snuke finished the operations
	vector<int> result = findElementsS(N, K, A);
	
	// Print output
	for(int i=0; i<result.size(); i++)
	{
	    cout << result[i] << " ";
	}
	cout << endl;

	return 0;
}