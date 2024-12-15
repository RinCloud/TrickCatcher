# Program to find the minimum integer m that satisfies the condition

# Define the sequence generation function
def generate_sequence(s):
    sequence = []
    sequence.append(s)

    while True:
        current = sequence[-1]
        
        # Applying the function f(n) to find the next element in the sequence
        if current % 2 == 0:
            next = current // 2
        else:
            next = (3 * current) + 1

        # Check if the next element already exists in the sequence
        if next in sequence:
            return sequence.index(next) + 1
        
        sequence.append(next)

# Read the input value
s = int(input())

# Calculate and print the minimum integer m
print(generate_sequence(s))