N, L = map(int, input().split())
x = list(map(int, input().split()))
t = list(map(int, input().split()))

# Calculate the total time spent on the train
train_time = 2 * L

# Calculate the total time spent shopping
shopping_time = sum(t)

# Calculate the total time for the train to travel from the first station to the last station
travel_time = (x[-1] - x[0]) * 2

# Calculate the minimum time required
min_time = max(train_time, shopping_time, travel_time)

print(min_time)