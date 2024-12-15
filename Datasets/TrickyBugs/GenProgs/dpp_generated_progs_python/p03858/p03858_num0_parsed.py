# Pseudo code 

1. Read the values of N, a, b from input
2. Read the coordinates of the pinholes into a list
3. Initialize a variable count to 0
4. Iterate through each pair of pinholes (i, j) where i < j
5. Calculate the distance d(i, j) = |x_i - x_j| + |y_i - y_j|
6. Calculate d(a, i) and d(b, i)
7. If d(a, i) = d(a, j) or d(b, i) = d(b, j), increment count
8. Print count