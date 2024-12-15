# Program:

N, K, Q = map(int, input().split())
A = list(map(int, input().split()))

ans = float('inf')

for i in range(N):
    count = 0
    temp = []
    for j in range(N):
        if A[j] >= A[i]:
            count += 1
            if count >= K:
                temp.append(A[j])
                if len(temp) >= Q:
                    temp.sort()
                    ans = min(ans, temp[-Q] - temp[0])
        else:
            count = 0
            temp = []

print(ans)