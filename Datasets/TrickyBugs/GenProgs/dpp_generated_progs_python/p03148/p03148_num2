def max_satisfaction(N, K, sushi):
    # Sort sushi in descending order based on deliciousness
    sushi.sort(key=lambda x: x[1], reverse=True)

    # Create a dictionary to store the number of pieces for each topping
    topping_count = {}

    # Initialize the base total deliciousness and variety bonus
    base_total_deliciousness = 0
    variety_bonus = 0

    # Iterate over the sushi and calculate the satisfaction
    for i in range(K):
        topping = sushi[i][0]
        deliciousness = sushi[i][1]

        base_total_deliciousness += deliciousness

        if topping in topping_count:
            topping_count[topping] += 1
        else:
            topping_count[topping] = 1

    # Calculate the variety bonus
    for key in topping_count:
        variety_bonus += topping_count[key] ** 2

    # Calculate the maximum satisfaction
    maximum_satisfaction = base_total_deliciousness + variety_bonus

    return maximum_satisfaction


# Read the input from standard input
N, K = map(int, input().split())

sushi = []
for _ in range(N):
    t, d = map(int, input().split())
    sushi.append((t, d))

# Calculate and print the maximum satisfaction
print(max_satisfaction(N, K, sushi))