# Program to find the maximum value of f

# Function to calculate f(m)
def calculate_f(m, a):
    f_value = 0
    for num in a:
        f_value += m % num
    return f_value

# Read input from standard input
N = int(input())
a = list(map(int, input().split()))

# Find the maximum value of f
max_f = 0
for m in range(max(a)):
    f_value = calculate_f(m, a)
    if f_value > max_f:
        max_f = f_value

# Print the maximum value of f
print(max_f)