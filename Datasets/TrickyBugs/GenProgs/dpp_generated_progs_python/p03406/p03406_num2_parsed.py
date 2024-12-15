import math

N, M = map(int, input().split())
A = list(map(int, input().split()))

MOD = 10**9 + 7

# Calculate the factorial of N
fact_N = math.factorial(2**N)

# Calculate the count of permutations that would result in Player 1 becoming the champion
count = 0

for i in range(fact_N):
    permutation = [0] * (2**N)
    
    # Generate the permutation
    for j in range(2**N):
        permutation[j] = (i // math.factorial(j)) % (2**N - j) + 1
    
    # Check if Player 1 becomes the champion for this permutation
    champion = permutation[0]
    for j in range(1, 2**N):
        if permutation[j] == 1:
            champion = 1
        elif permutation[j] in A:
            champion = permutation[j]
    
    # Update the count if Player 1 becomes the champion
    if champion == 1:
        count += 1

# Print the answer
print(count % MOD)