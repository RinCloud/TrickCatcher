# Solution:

## Approach:

We will iterate through each round and calculate the maximum score that can be earned for that round. 

For each round `i`, we will check the score that can be earned for each hand - rock, paper, and scissors. We will use a dynamic programming approach to keep track of the maximum score for each hand for the previous `K` rounds. 

We will define a 2D array `dp` with dimensions `[N][3]`, where `N` is the number of rounds and `3` represents the three hands - rock, paper, and scissors. `dp[i][j]` will represent the maximum score that can be earned for hand `j` in round `i`.

We will initialize `dp` with all zeros. For the first `K` rounds, we can use any hand, so we will set the scores for all hands `j` in `dp[i][j]` to the corresponding points `R`, `S`, or `P`.

Then, for each round `i` starting from `K+1`, we will calculate the maximum score for each hand `j` as follows:

1. If the machine is playing rock in round `i`, calculate the maximum score for rock as `max(dp[i-K][1] + R, dp[i-K][2] + P)` because we cannot use scissors again (represented by `dp[i-K][1]`) and we scored `R` points if we won with rock or `P` points if we won with paper.
2. If the machine is playing paper in round `i`, calculate the maximum score for paper as `max(dp[i-K][0] + S, dp[i-K][2] + P)` because we cannot use rock again (represented by `dp[i-K][0]`) and we scored `S` points if we won with scissors or `P` points if we won with paper.
3. If the machine is playing scissors in round `i`, calculate the maximum score for scissors as `max(dp[i-K][0] + S, dp[i-K][1] + R)` because we cannot use paper again (represented by `dp[i-K][0]`) and we scored `S` points if we won with scissors or `R` points if we won with rock.

Finally, we will find the maximum score among all hands for the last round `N` and print it as the maximum total score earned in the game.

## Plan:

1. Read the input values for `N`, `K`, `R`, `S`, `P`, and `T`.
2. Create an empty 2D array `dp` with dimensions `[N][3]`.
3. Initialize `dp` with all zeros.
4. Set the scores for the first `K` rounds in `dp` based on the points `R`, `S`, and `P`.
5. Iterate through each round starting from `K+1`:
     - Calculate the maximum score for each hand `j` based on the previous `K` rounds using the dynamic programming approach.
6. Find the maximum score among all hands for the last round `N`.
7. Print the maximum total score earned in the game.

Let's implement this in the code: