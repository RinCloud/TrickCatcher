from itertools import combinations

# Read the value of N
N = int(input())

# Read the list of deliciousness for each takoyaki
d = list(map(int, input().split()))

# Initialize the sum of health points
sum_hp = 0

# Compute the sum of health points for all possible combinations of two takoyaki
for takoyaki_combination in combinations(d, 2):
    sum_hp += takoyaki_combination[0] * takoyaki_combination[1]

# Print the sum of health points
print(sum_hp)