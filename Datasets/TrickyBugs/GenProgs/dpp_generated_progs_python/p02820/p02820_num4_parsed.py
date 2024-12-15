# Approach:
1. We need to find the maximum total score that can be earned by choosing the hand to play in each round.
2. Initialize a variable `score` to store the maximum total score.
3. Iterate over each round from 1 to N. For each round, calculate the score for each hand (Rock, Paper, Scissors).
4. To calculate the score for each hand, we need to consider the previous K rounds. Initialize a list `prev_hands` to store the hands used in the previous K rounds.
5. If the current round is less than or equal to K, then we can use any hand. Calculate the score for each hand based on the condition mentioned in the problem statement.
6. If the current round is greater than K, then we cannot use the hand used in the (i-K)-th round. Update the list `prev_hands` by removing the hand used in the (i-K)-th round and add the hand used in the current round.
7. Calculate the score for each hand based on the condition mentioned in the problem statement.
8. Add the maximum score among the three hands to the `score` variable.
9. Finally, print the `score` variable.

# Program:

N, K = map(int, input().split())
R, S, P = map(int, input().split())
T = input()

score = 0
prev_hands = []

for i in range(N):
    if i < K:
        if T[i] == 'r':
            score += P
        elif T[i] == 's':
            score += R
        else:
            score += S
    else:
        prev_hands.remove(prev_hands[0])
        prev_hands.append(T[i])
        if T[i] == 'r' and 'r' not in prev_hands:
            score += P
        elif T[i] == 's' and 's' not in prev_hands:
            score += R
        elif T[i] == 'p' and 'p' not in prev_hands:
            score += S

print(score)