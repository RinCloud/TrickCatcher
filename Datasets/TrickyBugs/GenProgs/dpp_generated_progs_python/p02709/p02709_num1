N = int(input())
A = list(map(int,input().split()))

A.sort()

happiness = 0
for i in range(N):
    happiness += A[i] * abs(i - (N-1)//2)

print(happiness)