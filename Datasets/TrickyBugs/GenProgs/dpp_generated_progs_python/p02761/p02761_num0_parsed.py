# get input values
N, M = map(int, input().split())
conditions = []
for _ in range(M):
    s, c = map(int, input().split())
    conditions.append((s, c))

# check and find the smallest integer
ans = -1
for i in range(10**N):
    num = str(i).zfill(N)
    valid = True
    for s, c in conditions:
        if num[s-1] != str(c):
            valid = False
            break
    if valid:
        ans = i
        break

# print the result
print(ans)