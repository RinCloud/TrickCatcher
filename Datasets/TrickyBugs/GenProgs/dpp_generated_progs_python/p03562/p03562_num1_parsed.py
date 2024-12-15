import numpy as np

# Function to calculate bitwise XOR
def calc_xor(x, y):
    xor = np.bitwise_xor(np.fromiter(map(int, list(x)), dtype=int),
                         np.fromiter(map(int, list(y)), dtype=int))
    xor = ''.join(map(str, xor.tolist()))
    return xor

# Function to calculate the number of different integers not exceeding X
def count_integers(N, X, A):
    X = X.zfill(4000)
    integers = {X}
    for i in range(N):
        A[i] = A[i].zfill(4000)
        new_integers = set()
        for integer in integers:
            new_integers.add(integer)
            new_integers.add(calc_xor(integer, A[i]))
            new_integers.add(integer + integer)
        integers = new_integers
    count = 0
    for integer in integers:
        if int(integer, 2) <= int(X, 2):
            count += 1
    return count

# Parse input
N, X = map(int, input().split())
A = []
for _ in range(N):
    A.append(input())

# Calculate and print output
output = count_integers(N, X, A)
print(output)