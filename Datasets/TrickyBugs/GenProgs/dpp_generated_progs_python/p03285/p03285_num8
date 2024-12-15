# Program to determine if there is a way to buy cakes and doughnuts for exactly N dollars

# Function to check if it is possible to buy cakes and doughnuts for exactly N dollars
def can_buy_cakes_and_doughnuts(N):
    # Iterate through all possible combinations of cakes and doughnuts
    for cakes in range(0, N // 4 + 1):
        for doughnuts in range(0, N // 7 + 1):
            # Check if the total cost is equal to N
            if cakes * 4 + doughnuts * 7 == N:
                return True
    return False

# Main function
def main():
    # Read the input value
    N = int(input())

    # Check if it is possible to buy cakes and doughnuts for exactly N dollars
    if can_buy_cakes_and_doughnuts(N):
        print("Yes")
    else:
        print("No")

# Call the main function
main()