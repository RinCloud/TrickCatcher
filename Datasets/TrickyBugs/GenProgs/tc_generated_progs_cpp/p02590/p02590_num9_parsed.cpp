#define mod 200003
#define LL long long int
#define MAXN 220001

int n;
int a[MAXN];
LL cnt[MAXN];
LL ans;

void solve()
{
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        cnt[a[i] % mod]++;
    }
    for(int i = 0; i < mod; i++)
        ans += (cnt[i] * (cnt[i]-1) / 2) % mod;
    for(int i = 1; i <= n; i++)
    {
        ans -= (cnt[a[i] % mod] * (cnt[a[i] % mod]-1) / 2) % mod;
        cout << ans << endl;
    }
}
int main()
{
    solve();
    return 0;
}
