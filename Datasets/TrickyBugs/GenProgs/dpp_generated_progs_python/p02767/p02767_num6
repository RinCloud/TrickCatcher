# Taking input
N = int(input())
coordinates = list(map(int, input().split()))

# Finding the median of the coordinates
median = sum(coordinates) // N

# Finding the minimum total stamina
total_stamina = sum((x - median) ** 2 for x in coordinates)

# Printing the result
print(total_stamina)