# Helper function to calculate maximum possible value of X-Y
def calculate_maximum_value(N, V, C):
    maximum_value = 0

    # Calculate X-Y for each combination of gems
    for i in range(2**N):
        gems_chosen = []

        # Convert integer i to binary and map it to the gems
        binary = bin(i)[2:].zfill(N)
        for j in range(N):
            if binary[j] == '1':
                gems_chosen.append(V[j])

        # Calculate X and Y for the current combination of gems
        X = sum(gems_chosen)
        Y = sum(gems_chosen[i] for i in range(len(gems_chosen)) if binary[i] == '1')

        # Update maximum value if necessary
        maximum_value = max(maximum_value, X - Y)

    return maximum_value


# Read input from standard input
N = int(input())
V = list(map(int, input().split()))
C = list(map(int, input().split()))

# Calculate and print the maximum possible value of X-Y
print(calculate_maximum_value(N, V, C))