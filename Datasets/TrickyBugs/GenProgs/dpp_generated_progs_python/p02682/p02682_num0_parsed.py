import sys

def solve_cards(A, B, C, K):
    # If there are enough A cards to pick
    if K <= A:
        return K

    # If there are enough A and B cards combined to pick
    if K <= A + B:
        return A

    # If there are enough A, B, and C cards combined to pick
    if K <= A + B + C:
        return A - (K - A - B)

    # If there are more cards to pick than available
    return 0

# Read the input from standard input
input_line = sys.stdin.readline().strip()
A, B, C, K = map(int, input_line.split())

# Call the function and print the result
result = solve_cards(A, B, C, K)
print(result)