# Takahashi's Dice

# Function to find the number of combinations of N sides shown by the dice such that the sum of no two different sides is i.
def find_combinations(K, N):
    MOD = 998244353 # Modulo 998244353
    
    # Calculate the number of dice with each number from 1 to K
    num_dice = [0] * (K + 1)
    for i in range(1, K + 1):
        num_dice[i] = N
    
    # Calculate the number of combinations for each i = 2, 3, ..., 2K
    combinations = [0] * (2 * K)
    for i in range(2, 2 * K + 1):
        for j in range(1, K + 1):
            k = i - j
            if k > K or k < 1:
                continue
            combinations[i - 1] += num_dice[j] * num_dice[k]
            combinations[i - 1] %= MOD
    
    return combinations

# Main function
if __name__ == '__main__':
    # Read K and N from input
    K, N = map(int, input().split())
    
    # Find the number of combinations
    combinations = find_combinations(K, N)
    
    # Print the output
    for combination in combinations:
        print(combination)