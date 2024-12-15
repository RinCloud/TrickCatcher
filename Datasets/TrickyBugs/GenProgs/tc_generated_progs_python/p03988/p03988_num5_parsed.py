# Plan:

- Converted the code into a function definition, `def is_possible_tree(n, a)`, which receives `n` and `a` as parameters representing the number of vertices and the list of distances, respectively.
- The code inside the function is as follows:
- Created a new list `sorted_a` containing the sorted elements of `a`.
- Assigned the minimum and maximum values of `sorted_a` to the variables `I` and `A`, respectively.
- Counted the occurrences of each element in `a` using the collections module and assigned it to the variable `c`.
- Checked the conditions for the existence of a possible tree:
  - If the number of vertices with maximum distance is not exactly 1, or the number of vertices with minimum distance is greater than `A % 2 + 1`, or `I * 2 < A`, then it is not possible to create a tree, so print "Impossible" and return.
  - For each element in the range from `I + 1` to `A + 1` (inclusive), checked if it exists in the counter `c` and if its occurrence count is greater than or equal to 2. If any of these conditions is not satisfied, then it is not possible to create a tree, so print "Impossible" and return.
- If all the conditions are satisfied, then print "Possible" to indicate that a tree can be constructed.