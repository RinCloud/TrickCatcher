# Approach:
1. Sort the healths of monsters in non-decreasing order.
2. Calculate the total number of attack moves required to bring all monsters' healths to 0 or below without using special move.
3. Subtract the number of special moves available from the total number of attack moves required to get the minimum number of attack moves required before winning.

# Steps:
1. Read input values for N and K.
2. Read the healths of monsters and store them in a list.
3. Sort the list in non-decreasing order.
4. Initialize a variable "total_attacks" to 0.
5. Iterate over the sorted list of monster healths and for each health value:
   * If the health of current monster is greater than 0, add it to "total_attacks".
6. Calculate "min_attacks" as "total_attacks - K".
7. If "min_attacks" is less than 0, set it to 0.
8. Print the value of "min_attacks".