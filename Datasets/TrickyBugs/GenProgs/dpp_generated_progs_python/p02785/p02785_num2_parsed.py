def fennec_attack_count(N, K, H):
    if K >= N:
        return 0
    H.sort(reverse=True)
    for i in range(K):
        H[i] = 0
    return sum(H)

N, K = map(int, input().split())
H = list(map(int, input().split()))

print(fennec_attack_count(N, K, H))