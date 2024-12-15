import random

def minimize_final_health(N, A):
    while len(A) > 1:
        attacker = random.choice(A)
        attacked = random.choice(A)
        while attacked == attacker:
            attacked = random.choice(A)
        A[A.index(attacked)] -= attacker
        if A[A.index(attacked)] <= 0:
            A.remove(attacked)
    return A[0]

# Taking inputs
N = int(input())
A = list(map(int, input().split()))

# Calling the function and printing the output
print(minimize_final_health(N, A))