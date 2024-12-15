# Approach:

* First, we sort the points based on the x-coordinate.
* Then, we calculate the prefix sums of the y-coordinates.
* Let's say we're interested in finding the sum of f(T) over all non-empty subsets of size k, where k ranges from 1 to N.
* The answer for each k can be calculated as follows:
  * For each valid k, we iterate through all possible starting points for the subset of size k, i.e., we iterate through all possible i values starting from 0 up to N - k.
  * For each starting point i, we find the minimum and maximum y-coordinates in the subset of size k starting from point i.
  * The number of points contained in the smallest rectangle is equal to the difference between the prefix sums of the maximum and minimum y-coordinates.
  * We add this difference to the answer.
* Finally, we print the answer modulo 998244353.

# Pseudocode:

* Sort the points based on the x-coordinate.
* Initialize answer as 0.
* Iterate for each k from 1 to N:
  * For each valid k, iterate through all possible starting points i from 0 to N - k:
    * Find the minimum and maximum y-coordinates in the subset of size k starting from point i.
    * Add the difference between the prefix sums of the maximum and minimum y-coordinates to the answer.
* Print the answer modulo 998244353.

# Implementation: