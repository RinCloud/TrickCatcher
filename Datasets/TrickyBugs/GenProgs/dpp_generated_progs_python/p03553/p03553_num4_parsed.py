# Here is one possible solution to the problem:

def smash_gems(N, a):
    # Initialize the maximum amount of money earned as 0
    max_money = 0

    # Iterate through all positive integers x
    for x in range(1, N+1):
        # Initialize the current amount of money earned as 0
        current_money = 0

        # Iterate through all gems labeled with multiples of x
        for i in range(x, N+1, x):
            # if the gem labeled i remains without getting smashed, add a_i yen to the current amount of money
            current_money += a[i-1]

        # Update the maximum amount of money earned if the current amount is greater
        max_money = max(max_money, current_money)

    return max_money

# Read the input
N = int(input())
a = list(map(int, input().split()))

# Call the function and print the output
print(smash_gems(N, a))