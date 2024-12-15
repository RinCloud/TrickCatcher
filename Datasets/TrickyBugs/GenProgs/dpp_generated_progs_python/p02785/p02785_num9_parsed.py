def fennec_battle(N, K, H):
    H.sort(reverse=True)
    attack_count = sum(H[K:])
    return attack_count

N, K = map(int, input().split())
H = list(map(int, input().split()))

result = fennec_battle(N, K, H)
print(result)