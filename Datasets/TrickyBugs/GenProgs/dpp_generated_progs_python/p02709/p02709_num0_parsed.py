N = int(input())
A = list(map(int, input().split()))

A.sort(reverse=True)
happiness_points = 0

for i in range(N):
    happiness_points += A[i] * abs(i - (N-1)//2)

print(happiness_points)
