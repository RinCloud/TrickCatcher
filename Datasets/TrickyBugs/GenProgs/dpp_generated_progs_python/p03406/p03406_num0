import itertools

def count_champion_permutations(N, M, A):
    mod = 10**9 + 7
    factorial = [1] * (N + 1)
    for i in range(1, N + 1):
        factorial[i] = (factorial[i - 1] * i) % mod

    winners = []
    for i in range(1, N + 1):
        if i not in A:
            winners.append(i)

    count = 0
    for perm in itertools.permutations(winners):
        valid = True
        for i in range(M):
            if A[i] > perm[i]:
                valid = False
                break
        if valid:
            count = (count + factorial[N - M]) % mod
    
    return count

# Reading the input
N, M = map(int, input().split())
A = list(map(int, input().split()))

# Calling the function and printing the result
result = count_champion_permutations(N, M, A)
print(result)