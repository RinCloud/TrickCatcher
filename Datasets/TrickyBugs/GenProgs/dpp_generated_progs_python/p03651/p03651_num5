from itertools import combinations

def possible_to_reach_state(N, K, balls):
    for i in range(1, N+1):
        combs = combinations(balls, i)
        for comb in combs:
            abs_diff = abs(comb[0] - comb[1])
            if abs_diff == K or abs_diff % K == 0:
                return "POSSIBLE"
    return "IMPOSSIBLE"

N, K = map(int, input().split())
balls = list(map(int, input().split()))

result = possible_to_reach_state(N, K, balls)
print(result)