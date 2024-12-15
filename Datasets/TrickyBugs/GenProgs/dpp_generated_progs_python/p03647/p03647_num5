# Approach:
- We need to check if it is possible to reach Island N using two boat services.
- If there exists a direct boat service from Island 1 to Island N, then it is possible to reach Island N using only one boat service and the answer will be "Possible".
- Otherwise, we need to check if there exists a pair of boat services such that the starting island of the first service is Island 1 and the ending island of the second service is Island N.
- We can use a set to store the ending islands of all boat services starting from Island 1.
- Then, we can iterate through all boat services and check if there exists a boat service where the starting island is in the set of ending islands.
- If such a boat service is found, then it is possible to reach Island N using two boat services and the answer will be "Possible".
- If no such boat service is found, then it is not possible to reach Island N using two boat services and the answer will be "Impossible".

# Plan:
1. Parse the input values for N and M.
2. Initialize a set called `ending_islands` to store the ending islands of boat services starting from Island 1.
3. Iterate over M and do as follows:
    a. Parse the input values for a_i and b_i.
    b. If a_i is equal to 1, add b_i to `ending_islands`.
4. Iterate over M and do as follows:
    a. Parse the input values for a_i and b_i.
    b. If there exists a boat service where the starting island is a_i and the ending island is in `ending_islands`, print "Possible" and return.
5. Print "Impossible".