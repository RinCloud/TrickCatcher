# Approach:
- We need to find the maximum possible score at the end of the game.
- To do that, we will simulate the game by following these steps:
  1. Start a variable `start_square` to store the starting square of the piece.
  2. Create an empty set `visited` to keep track of the squares we have visited.
  3. Create an empty list `score_list` to store the score at each move.
  4. For each move starting from 1 up to K:
     - Move the piece to square `P[start_square-1]`.
     - Add the score of the current square `C[P[start_square-1]-1]` to the score list.
     - Set the current square `start_square` to `P[start_square-1]`.
     - If the current square `start_square` is already visited, calculate the total score using the formula:
       total_score = score_list[total_moves] + (score_list[total_moves] - score_list[first_occurrence_of_start_square]) * (K // total_moves)
       where `total_moves` is the current move number and `first_occurrence_of_start_square` is the move number when `start_square` was first visited.
       Print `total_score` and return.
     - If the current square `start_square` is not visited, add it to the `visited` set.
  5. Print the maximum score from the score list.

# Let's write the code now:

N, K = map(int, input().split())
P = list(map(int, input().split()))
C = list(map(int, input().split()))

start_square = 1
visited = set()
score_list = [0]

for move in range(1, K+1):
    start_square = P[start_square-1]
    score_list.append(score_list[move-1] + C[start_square-1])
    
    if start_square in visited:
        first_occurrence_of_start_square = score_list.index(score_list[move])
        total_score = score_list[move] + (score_list[move] - score_list[first_occurrence_of_start_square]) * ((K-move)//(move-first_occurrence_of_start_square))
        print(total_score)
        break

    visited.add(start_square)

else:
    print(max(score_list))