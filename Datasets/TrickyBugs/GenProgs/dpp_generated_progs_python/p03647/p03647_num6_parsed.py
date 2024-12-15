# Reading input
n, m = map(int, input().split())

# Creating a set of all possible destinations from Island 1
possible_destinations = set()
for _ in range(m):
    a, b = map(int, input().split())
    if a == 1:
        possible_destinations.add(b)

# Checking if there is a possible route using two services
for destination in possible_destinations:
    if n in possible_destinations:
        print("POSSIBLE")
        exit()
print("IMPOSSIBLE")