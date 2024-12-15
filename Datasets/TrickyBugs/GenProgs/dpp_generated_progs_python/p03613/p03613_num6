# Start of program

# Function to calculate the maximum possible number of occurrences of X
def calc_max_occurrences(N, sequence):
    # Initialize a dictionary to store the frequencies of each element in the sequence
    frequencies = {}

    # Iterate through the sequence and update the frequencies
    for element in sequence:
        if element in frequencies:
            frequencies[element] += 1
        else:
            frequencies[element] = 1

    # Find the maximum frequency of any element in the sequence
    max_frequency = max(frequencies.values())

    return max_frequency

# Read the input values
N = int(input())
sequence = list(map(int, input().split()))

# Calculate and print the maximum possible occurrences of X
print(calc_max_occurrences(N, sequence))

# End of program