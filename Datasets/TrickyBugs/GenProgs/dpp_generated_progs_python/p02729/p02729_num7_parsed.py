from math import comb

def choose_balls(N, M):
    count = 0
    for i in range(0, N+1, 2):
        count += comb(N, i) * comb(M, 2-i)
    return count

N, M = map(int, input().split())
print(choose_balls(N, M))