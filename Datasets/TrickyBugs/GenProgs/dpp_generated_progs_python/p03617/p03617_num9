# Taking input of the cost of different volumes of bottles
Q, H, S, D = map(int, input().split())

# Taking input of the required volume of ice tea
N = int(input())

# Calculating the minimum cost
min_cost = min(min(Q*4, H*2, S), D//2) * (N//2) + min(Q*2, H, S) * (N%2)

# Printing the minimum cost
print(min_cost)