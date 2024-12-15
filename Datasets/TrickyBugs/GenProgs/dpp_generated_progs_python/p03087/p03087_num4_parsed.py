# Program:

N, Q = map(int, input().split())
S = input().strip()

counts = [0] * (N+1)
for i in range(1, N):
    counts[i] = counts[i-1] + (S[i-1:i+1] == "AC")

for _ in range(Q):
    l, r = map(int, input().split())
    print(counts[r-1] - counts[l-1])