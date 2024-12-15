#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

typedef long long int LL;
typedef std::pair<LL, LL> PL;

const int MOD = 1000000007;
LL INF = 1001001001001001001;

LL gcd(LL a, LL b)
{
    if (a < b)
        return gcd(b, a);
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

LL sum(LL a, LL i, LL d)
{
    return a * i + d * i * (i - 1) / 2;
}

LL countPossibleValues(LL n, LL x, LL d)
{
    if (d == 0)
    {
        if (x == 0)
            return 1;
        else
            return n + 1;
    }
    LL g = gcd(std::abs(x), std::abs(d));
    x = x / g;
    d = d / g;
    if (d < 0)
    {
        x = x + (n - 1) * d;
        d = -d;
    }
    LL ans = 0;
    std::vector<std::vector<PL>> v(d);
    for (LL i = 0; i <= n; i++)
    {
        LL l = sum(x, i, d);
        LL r = sum(x + (n - i) * d, i, d);
        if (l > r)
            std::swap(l, r);
        v[i % d].push_back(PL(l, r));
    }
    for (LL i = 0; i <= std::min(n, d - 1); i++)
    {
        std::sort(v[i].begin(), v[i].end());
        LL MAX = -INF;
        for (auto p : v[i])
        {
            LL l = p.first;
            LL r = p.second;
            l = std::max(l, MAX + d);
            ans += std::max((r - l) / d + 1, 0LL);
            MAX = std::max(MAX, r);
        }
    }
    return ans;
}

int main()
{
    LL n, x, d;
    std::cin >> n >> x >> d;
    std::cout << countPossibleValues(n, x, d) << std::endl;
    return 0;
}