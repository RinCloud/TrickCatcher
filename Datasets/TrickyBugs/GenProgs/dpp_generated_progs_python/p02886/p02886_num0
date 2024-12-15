# Taking input of the number of takoyaki served
N = int(input())

# Taking input of the deliciousness of each takoyaki
deliciousness = list(map(int, input().split()))

# variable to store the sum of health points restored
sum_health_points = 0

# iterating over all possible pairs of takoyaki
for i in range(N):
  for j in range(i+1, N):
    # calculating the health points restored from eating the two takoyaki
    health_points_restored = deliciousness[i] * deliciousness[j]
    
    # adding the health points to the sum
    sum_health_points += health_points_restored

# printing the sum of health points restored
print(sum_health_points)