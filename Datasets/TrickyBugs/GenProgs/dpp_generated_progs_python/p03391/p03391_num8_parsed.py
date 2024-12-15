def optimal_candies(N, sequences):
    max_candies = 0
    for i in range(N):
        A, B = sequences[i]
        max_candies += min(A, B)
    return max_candies

N = int(input())
sequences = []
for _ in range(N):
    A, B = map(int, input().split())
    sequences.append((A, B))

print(optimal_candies(N, sequences))