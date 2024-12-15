for(int l = 0;l <= n;++l)
{
    for(int r = 0;l + r <= n;++r)
    {
        int k = l + r;
        if(l)   f[l][r] = max(f[l][r],f[l - 1][r] + a[d[k]] * abs(d[k] - l + 1));
        if(r)   f[l][r] = max(f[l][r],f[l][r - 1] + a[d[k]] * abs(d[k] - n + r));
    }
}
