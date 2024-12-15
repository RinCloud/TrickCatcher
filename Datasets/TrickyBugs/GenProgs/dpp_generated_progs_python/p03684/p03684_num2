# Program

t = int(input())
towns = []
for _ in range(t):
    x, y = map(int, input().split())
    towns.append((x, y))

towns.sort()

min_cost = float('inf')

for i in range(t-1):
    min_cost = min(min_cost, abs(towns[i][0]-towns[i+1][0]), abs(towns[i][1]-towns[i+1][1]))

print(min_cost)