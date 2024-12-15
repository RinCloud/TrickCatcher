def optimal_candies(N, sequences):
    candies = 0
    while True:
        equal_sequences = True
        for i in range(N):
            if sequences[i][0] != sequences[i][1]:
                equal_sequences = False
                if sequences[i][0] > sequences[i][1]:
                    candies += 1
                    sequences[i][0] -= 1
                else:
                    sequences[i][1] -= 1
        if equal_sequences:
            break
    return candies

N = int(input())
sequences = []
for _ in range(N):
    A, B = map(int, input().split())
    sequences.append([A, B])

print(optimal_candies(N, sequences))