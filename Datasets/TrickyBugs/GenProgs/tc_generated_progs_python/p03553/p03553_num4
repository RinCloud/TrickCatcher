from copy import deepcopy

# Read input
N = int(input())
a0 = list(map(int, input().split()))

# Function to smash gems
def smash_gems(a):
    for i in range(N, 0, -1):
        if a[i - 1] < 0:
            tmp = 0
            b = []
            for j in range(1, 101):
                if i * j - 1 >= N:
                    break
                tmp += a[i * j - 1]
                b.append(i * j - 1)
            if tmp < 0:
                for j in b:
                    a[j] = 0
    return a

# Initialize variables
max_money = 0

# Smash gems for each pair in range from 1 to N-1
for k1 in range(N, 0, -1):
    for k2 in range(k1 - 1, 0, -1):
        # Create a copy of the original list
        a = deepcopy(a0)
        # Smash gems for first number in the pair
        for j in range(1, 101):
            if k1 * j - 1 >= N:
                break
            a[k1 * j - 1] = 0
        # Smash gems for second number in the pair
        for j in range(1, 101):
            if k2 * j - 1 >= N:
                break
            a[k2 * j - 1] = 0
        # Perform smashing operation on the copy
        a = smash_gems(a)
        # Update max_money if necessary
        if sum(a) > sum(a0):
            a0 = a

# Print the maximum amount of money that can be earned
print(sum(a0))