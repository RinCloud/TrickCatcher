# read input values
N = int(input())
X = list(map(int, input().split()))

# calculate minimum total stamina
min_stamina = float('inf')
for P in range(1, 101):
    total_stamina = sum((x - P) ** 2 for x in X)
    min_stamina = min(min_stamina, total_stamina)

# print the minimum total stamina
print(min_stamina)