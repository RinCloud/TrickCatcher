'''
from collections import Counter

N = int(input())
A = list(map(int, input().split()))

count = Counter(A)

for i in range(N):
    total = (N-1) * (N-2) // 2
    freq = count[A[i]]
    pairs = freq * (freq - 1) // 2
    ans = total - pairs
    print(ans)
'''