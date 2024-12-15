import sys

def count_divisible_substrings(N, P, S):
    count = 0
    for i in range(N):
        for j in range(i, N):
            substr = int(S[i:j+1])
            if substr % P == 0:
                count += 1
    return count

N, P = map(int, sys.stdin.readline().split())
S = sys.stdin.readline().strip()

print(count_divisible_substrings(N, P, S))