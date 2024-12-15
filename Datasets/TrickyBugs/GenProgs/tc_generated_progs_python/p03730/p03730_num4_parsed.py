a,b,c = map(int,input().split())

ans = "NO"
for i in range(1, b):
    if (a*i) % b == c:
        ans = "YES"
        break

print(ans)