from itertools import combinations

N, A, B, C = map(int, input().split())
l = [int(input()) for _ in range(N)]

def calculate_mp(lengths):
    min_mp = float('inf')
    for i in range(1, N-1):
        for comb in combinations(lengths, i):
            for a in comb:
                for b in comb:
                    for c in comb:
                        if a + b + c == A:
                            mp = abs(A - a) + abs(B - b) + abs(C - c) + 10*(N - i)
                            min_mp = min(min_mp, mp)

    return min_mp

min_mp = calculate_mp(l)
print(min_mp)