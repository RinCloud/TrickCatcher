import itertools

def maximize_cake_value(N, M, cakes):
    max_value = 0

    # Generate all possible combinations of choosing M cakes
    combinations = itertools.combinations(cakes, M)

    for combination in combinations:
        # Calculate the total beauty, tastiness, and popularity for the current combination
        total_beauty = sum([cake[0] for cake in combination])
        total_tastiness = sum([cake[1] for cake in combination])
        total_popularity = sum([cake[2] for cake in combination])

        # Calculate the absolute value of the total beauty, tastiness, and popularity
        abs_total_beauty = abs(total_beauty)
        abs_total_tastiness = abs(total_tastiness)
        abs_total_popularity = abs(total_popularity)

        # Calculate the value of the current combination
        value = abs_total_beauty + abs_total_tastiness + abs_total_popularity

        # Update the maximum value if necessary
        if value > max_value:
            max_value = value

    return max_value


# Read input from Standard Input
N, M = map(int, input().split())
cakes = []

for _ in range(N):
    x, y, z = map(int, input().split())
    cakes.append((x, y, z))

# Get the maximum possible value of (the absolute value of the total beauty) + (the absolute value of the total tastiness) + (the absolute value of the total popularity) for the set of cakes that Ringo chooses
result = maximize_cake_value(N, M, cakes)

# Print the result
print(result)