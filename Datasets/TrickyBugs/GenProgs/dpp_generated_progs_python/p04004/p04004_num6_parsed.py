# PROGRAM

def alice_victory_count(n, m, k):
    # Calculate the number of possibilities for Alice to win
    count = (3 ** (n + m + k)) % 1000000007
    return count

# Take input from user
n, m, k = map(int, input().split())

# Calculate and print the result
result = alice_victory_count(n, m, k)
print(result)