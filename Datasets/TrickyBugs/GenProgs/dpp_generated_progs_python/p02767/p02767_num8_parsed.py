# Taking input
N = int(input())
X = list(map(int, input().split()))

# Finding the meeting coordinate that minimizes the total stamina
min_stamina = float('inf')
for p in range(1, 101):  # A meeting coordinate can be any integer between 1 and 100 inclusive
    total_stamina = sum((xi - p) ** 2 for xi in X)
    min_stamina = min(min_stamina, total_stamina)

# Printing the minimum total stamina
print(min_stamina)