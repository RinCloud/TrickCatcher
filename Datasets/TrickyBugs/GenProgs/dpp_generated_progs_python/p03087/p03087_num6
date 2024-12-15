N, Q = map(int, input().split())
S = input()

counts = [0] * (N-1)

for i in range(N-1):
    if S[i:i+2] == 'AC':
        counts[i] = 1

for _ in range(Q):
    l, r = map(int, input().split())
    print(sum(counts[l-1:r-1]))