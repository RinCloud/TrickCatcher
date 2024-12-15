def count_permutations(N, K, P):
    cnt = 0
    for i in range(N - K + 1):
        temp = P[i:i + K]
        if sorted(temp) == temp:
            cnt += 1
    return cnt


N, K = map(int, input().split())
P = list(map(int, input().split()))

print(count_permutations(N, K, P))