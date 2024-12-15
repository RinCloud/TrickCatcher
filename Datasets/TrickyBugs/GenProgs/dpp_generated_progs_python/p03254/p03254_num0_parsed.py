def distribute_sweets(N, x, a):
    a.sort()
    ans = 0
    for i in range(N):
        if x >= a[i]:
            ans += 1
            x -= a[i]
        else:
            break
    return ans

N, x = map(int, input().split())
a = list(map(int, input().split()))
print(distribute_sweets(N, x, a))