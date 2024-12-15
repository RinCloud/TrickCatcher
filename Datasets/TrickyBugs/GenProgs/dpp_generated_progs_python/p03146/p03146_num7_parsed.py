# Program to find the minimum integer m that satisfies the condition

# Function to calculate the next element of the sequence
def get_next_element(n):
    if n % 2 == 0:
        return n // 2
    else:
        return 3 * n + 1

# Function to find the minimum integer m
def find_minimum_m(s):
    a = [s] # Initialize the sequence with the first element
    index = 1
    while True:
        next_element = get_next_element(a[index - 1])
        if next_element in a:
            return len(a) - 1 - a.index(next_element)
        a.append(next_element)
        index += 1

# Read the input value
s = int(input())

# Find the minimum integer m
result = find_minimum_m(s)

# Print the result
print(result)