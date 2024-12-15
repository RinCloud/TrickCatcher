# Importing the required libraries
import itertools

# Function to find the greatest common divisor of two numbers
def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

# Function to find the modulo inverse of a number
def mod_inverse(a, m):
    m0 = m
    y = 0
    x = 1

    if m == 1:
        return 0

    while a > 1:
        q = a // m
        t = m

        m = a % m
        a = t
        t = y

        y = x - q * y
        x = t

    if x < 0:
        x = x + m0

    return x

# Function to calculate the factorial modulo m
def factorial_mod(n, m):
    result = 1
    for i in range(2, n + 1):
        result = (result * i) % m
    return result

# Function to calculate the number of different sequences
def count_sequences(n, x, y, balls):
    colors = []
    weights = []
    for ball in balls:
        color, weight = ball
        colors.append(color)
        weights.append(weight)

    # Find the unique colors
    unique_colors = list(set(colors))
    unique_colors.sort()
    num_colors = len(unique_colors)

    # Calculate the frequency of each color
    color_freq = []
    for color in unique_colors:
        freq = colors.count(color)
        color_freq.append(freq)

    # Find the cumulative sum of weights for each color
    cumulative_weights = []
    for i in range(num_colors):
        total = 0
        for j in range(n):
            if colors[j] == unique_colors[i]:
                total += weights[j]
        cumulative_weights.append(total)

    # Find the gcd of the cumulative weights
    gcd_weights = cumulative_weights[0]
    for i in range(1, num_colors):
        gcd_weights = gcd(gcd_weights, cumulative_weights[i])

    # Find the lcm of the color frequencies
    lcm_freq = color_freq[0]
    for i in range(1, num_colors):
        lcm_freq = (lcm_freq * color_freq[i]) // gcd(lcm_freq, color_freq[i])

    # Find the inverse of gcd(weights) modulo lcm_freq
    inverse_gcd_weights = mod_inverse(gcd_weights, lcm_freq)

    # Calculate the result
    result = factorial_mod(x + y, 10**9 + 7)
    for i in range(num_colors):
        num_swaps = cumulative_weights[i] // x + 1
        result = (result * mod_inverse(num_swaps, 10**9 + 7)) % (10**9 + 7)

    result = (result * inverse_gcd_weights) % (10**9 + 7)

    return result

# Reading inputs
n, x, y = map(int, input().split())

balls = []
for _ in range(n):
    color, weight = map(int, input().split())
    balls.append((color, weight))

# Calculating and printing the result
result = count_sequences(n, x, y, balls)
print(result)