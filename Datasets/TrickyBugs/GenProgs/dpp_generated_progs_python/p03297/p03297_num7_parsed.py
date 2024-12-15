import sys

def can_buy_juice_indefinitely(A, B, C, D):
    # If B is greater than A, Snuke cannot buy juice indefinitely
    if B > A:
        return "No"

    # If there are already enough cans of juice in stock, Snuke can buy juice indefinitely
    if A <= C * B:
        return "Yes"

    # Calculate the number of days needed to buy enough cans of juice
    days = (A - 1) // B

    # Calculate the number of cans of juice left after buying enough cans of juice
    remaining = A - (days * B)

    # If the number of cans of juice left is less than or equal to C, new cans will be added to the stock by the next morning
    if remaining <= C:
        return "Yes"

    # If the number of cans of juice left is greater than C, Snuke cannot buy juice indefinitely
    return "No"

# Read the number of test cases
T = int(input())

# Process each test case
for _ in range(T):
    # Read the values for A, B, C, and D
    A, B, C, D = map(int, input().split())

    # Check if Snuke can buy juice indefinitely
    result = can_buy_juice_indefinitely(A, B, C, D)

    # Print the result
    print(result)