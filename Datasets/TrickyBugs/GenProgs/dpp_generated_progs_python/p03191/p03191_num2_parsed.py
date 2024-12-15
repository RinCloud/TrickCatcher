MOD = int(1e9+7)

N = int(input())
A = list(map(int, input().split()))

# Count the number of -1's in the sequence
unknowns = A.count(-1)

# Find the total number of permutations for B1, B2, ..., BN
answer = 1
for i in range(1, N+1):
    answer = answer * i % MOD

# Store the frequencies of the integers other than -1
count = {}
for a in A:
    if a != -1:
        count[a] = count.get(a, 0) + 1

# Iterate through the possible integers to replace -1's
for i in range(1, N+1):
    # For each -1, update the count of integers other than -1
    for j in range(2 * unknowns, unknowns, -1):
        count[j] = count.get(j, 0) - 1
        if count[j] == 0:
            count.pop(j)
    
    # Update the answer by multiplying it by the number of possible values for Bi
    answer = answer * (2 * unknowns - i + 1) * pow(i, MOD-2, MOD) % MOD
    unknowns -= 1

print(answer)