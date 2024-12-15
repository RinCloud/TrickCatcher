#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 998244353

// Function to calculate gcd of two numbers
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate lcm of two numbers
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    ll N;
    cin >> N;

    vector<ll> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    ll sum = 0;

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            sum += lcm(A[i], A[j]);
            sum %= mod;
        }
    }

    cout << sum << endl;

    return 0;
}