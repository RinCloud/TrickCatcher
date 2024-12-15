# Plan
- We need to find the maximum number of books that can be read in total given the time constraint.
- We can achieve this by iterating through both desks and reading books from the one with the minimum time until the total time exceeds the given constraint.
- We will keep track of the number of books read and return this count as the output.

# Steps
- Read the values of N, M, and K from the input.
- Read the array of book reading times for desk A.
- Read the array of book reading times for desk B.
- Initialize a variable `total_time` to keep track of the total reading time.
- Initialize a variable `books_read` to keep track of the number of books read.
- Iterate over the desks until there are books remaining on both or the total time exceeds K:
    - If desk A has no books remaining or the current book on desk B takes less time to read than the current book on desk A:
        - Add the time to read the current book on desk B to `total_time`.
        - Increment `books_read` by 1.
        - Remove the current book from desk B.
    - Otherwise:
        - Add the time to read the current book on desk A to `total_time`.
        - Increment `books_read` by 1.
        - Remove the current book from desk A.
- Print the value of `books_read` as the output.