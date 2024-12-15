N, L = map(int, input().split()) # read N and L

shopping_centers = list(map(int, input().split())) # read shopping center coordinates

shopping_times = list(map(int, input().split())) # read shopping times

total_time = shopping_centers[0] * 2 # time to travel to the first shopping center and back to the starting point

for i in range(N-1):
    total_time += (shopping_centers[i+1] - shopping_centers[i]) * 2 + shopping_times[i+1] # time to travel to the next shopping center and back plus the shopping time

total_time += (L - shopping_centers[-1]) * 2 # time to travel from the last shopping center back to the starting point

print(total_time)
