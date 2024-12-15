import sys


# Function to calculate the maximum score for each round
def calculate_max_score(N, X, Y, Q, rounds):
    # Variables to store the maximum score for each round
    max_scores = []

    # Iterate over each round
    for i in range(Q):
        # Get the current round card values
        D, E = rounds[i]

        # Create a new deck Z by adding the current round card to X
        Z = X + [(D, E)]

        # Sort the deck Y in descending order based on the front side values
        sorted_Y = sorted(Y, reverse=True)

        # Initialize the score for the current round
        score = 0

        # Iterate over each card in deck Z
        for card in Z:
            # Check if there are any cards left in deck Y
            if len(sorted_Y) == 0:
                # No cards left in deck Y, score cannot be increased anymore
                break

            # Get the front side value of the card from deck Z
            Z_front = card[0]

            # Find the maximum valid card from deck Y that can be paired with the current card from deck Z
            for j, Y_card in enumerate(sorted_Y):
                # Get the front side value of the card from deck Y
                Y_front = Y_card

                # Check if the condition (Z_front <= Y_front) is satisfied
                if Z_front <= Y_front:
                    # Increase the score and remove the valid paired card from deck Y
                    score += 1

                    # Remove the paired card from deck Y
                    sorted_Y.pop(j)

                    # Break the loop and move to the next card in deck Z
                    break

        # Check if all cards from deck Z are paired
        if len(Z) == score:
            # All cards are paired, append the score to the maximum scores list
            max_scores.append(score)
        else:
            # Not all cards are paired, append -1 to the maximum scores list
            max_scores.append(-1)

    return max_scores


# Read the input from standard input
input_lines = sys.stdin.readlines()

# Get the number of cards
N = int(input_lines[0])

# Get the deck X
X = [tuple(map(int, line.split())) for line in input_lines[1:N + 1]]

# Get the deck Y
Y = list(map(int, input_lines[N + 1].split()))

# Get the number of rounds
Q = int(input_lines[N + 2])

# Get the rounds
rounds = [tuple(map(int, line.split())) for line in input_lines[N + 3:]]

# Calculate the maximum score for each round
max_scores = calculate_max_score(N, X, Y, Q, rounds)

# Print the maximum scores
for score in max_scores:
    print(score)