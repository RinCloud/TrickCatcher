def number_of_permutations(N, K, P):
    count = 0
    for i in range(N-K+1):
        sorted_sublist = sorted(P[i:i+K])
        if sorted_sublist == P[:i] + sorted_sublist + P[i+K:]:
            count += 1
    return count

N, K = map(int, input().split())
P = list(map(int, input().split()))

print(number_of_permutations(N, K, P))