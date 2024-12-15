# Program:

N = int(input())
A = list(map(int, input().split()))

A = sorted(A, reverse=True)

happiness = 0
for i in range(N):
    happiness += A[i] * abs(i - (N-1)//2)

print(happiness)