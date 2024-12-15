# Rock Paper Scissors (RPS) Battle

def max_score(N, K, R, S, P, T):
    # Initialize the maximum total score
    max_total_score = 0
    
    # Initialize a list to keep track of the hands used in the previous rounds
    prev_hands = []
    
    # Iterate over each round
    for i in range(N):
        # Check if it is the first K rounds
        if i < K:
            # Assign the score based on the machine's hand
            if T[i] == 'r':
                max_total_score += R
                prev_hands.append('r')
            elif T[i] == 's':
                max_total_score += S
                prev_hands.append('s')
            else:
                max_total_score += P
                prev_hands.append('p')
        else:
            # Check if the player can use the hand they used K rounds ago
            if T[i] == 'r':
                # Check if the player used Scissors K rounds ago
                if prev_hands[i-K] == 's':
                    max_total_score += S
                    prev_hands.append('s')
                else:
                    max_total_score += R
                    prev_hands.append('r')
            elif T[i] == 's':
                # Check if the player used Paper K rounds ago
                if prev_hands[i-K] == 'p':
                    max_total_score += P
                    prev_hands.append('p')
                else:
                    max_total_score += S
                    prev_hands.append('s')
            else:
                # Check if the player used Rock K rounds ago
                if prev_hands[i-K] == 'r':
                    max_total_score += R
                    prev_hands.append('r')
                else:
                    max_total_score += P
                    prev_hands.append('p')
    
    # Return the maximum total score earned
    return max_total_score

# Read the input
N, K = map(int, input().split())
R, S, P = map(int, input().split())
T = input()

# Call the function and print the result
print(max_score(N, K, R, S, P, T))