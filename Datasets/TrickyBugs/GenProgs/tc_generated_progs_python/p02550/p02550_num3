n, x, m = map(int, input().split())
ans = 0
al = [x]
for i in range(n):
    ans += x
    x = (x ** 2) % m
    if x in al:
        ind = al.index(x)
        loop = i - ind + 1
        l = al[ind:]
        ans += sum(l) * ((n - i - 1) // loop)
        for j in range((n - i - 1) % loop):
            ans += l[j]
        break
    al.append(x)
print(ans)