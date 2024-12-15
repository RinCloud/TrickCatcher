# Introduction:
1. We are given an array of N squares and a permutation array p[].
2. Initial position of a piece is 1.
3. We can move piece on square i to square p[i] in the1kt move, and score increases by c[p[i]].

# Approach:
1. Score is increasing by c[p[i]] in each move where piece moves from i to p[i].
2. So, Jump from any position to the next one, until we will reach starting position.
3. If K is large, then infinite loop will happen.
4. We will check if only c[i] can do better or repeating moves can do better score.
5. If no negative terms in c[] then infinite loop will happen.
6. If no positive score then print maximum score in c[].
7. If positive score, then get number of loops after it game will go infinite.
        7.1 We will get multiple loops, save scores after each loop.
        7.2 Then one step will bring back the piece to the current position.
        7.3 Take maximum of each loop and return.
8. We will check this for each position and take maximum of all positions as answer.

# To Do:
1. read input values.
2. implement the above approach.