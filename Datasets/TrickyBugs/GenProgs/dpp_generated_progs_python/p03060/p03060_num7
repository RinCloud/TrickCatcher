#importing required modules
from itertools import combinations

#reading the input
N = int(input())
V = list(map(int, input().split()))
C = list(map(int, input().split()))

#initializing the maximum value
max_value = 0

#generating all possible combinations of gems
for i in range(1, N+1):
    for combination in combinations(range(N), i):
        #calculating the value and cost of the combination
        value = sum(V[j] for j in combination)
        cost = sum(C[j] for j in combination)
        #updating the maximum value if applicable
        if value - cost > max_value:
            max_value = value - cost

#printing the maximum possible value
print(max_value)