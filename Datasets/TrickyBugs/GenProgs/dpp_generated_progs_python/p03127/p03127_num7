# PROGRAM:

import random

def find_minimum_final_health(N, A):
    while len(A) > 1:
        attacker_index = random.randint(0, len(A) - 1)
        attacker = A[attacker_index]
        defender_index = random.randint(0, len(A) - 1)
        while defender_index == attacker_index:
            defender_index = random.randint(0, len(A) - 1)
        defender = A[defender_index]
        A[defender_index] -= attacker
        if A[defender_index] <= 0:
            A.pop(defender_index)
    print(A[0])

# getting input from user
N = int(input())
A = list(map(int, input().split()))

# calling the function
find_minimum_final_health(N, A)