# PLAN
1. Read the input values N, M, and the list of observatory elevations H.
2. Initialize a list `is_good` of size N, where each element is initially set to True.
3. For each road connection (A, B), if H[A-1] is less than or equal to H[B-1], set `is_good[A-1]` to False.
   Similarly, if H[A-1] is greater than or equal to H[B-1], set `is_good[B-1]` to False.
4. Count the number of True values in `is_good` and print the result.