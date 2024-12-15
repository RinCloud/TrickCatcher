'''
This problem requires performing a series of operations on a list of cards and finding the maximum sum of the integers on the cards after the operations.

To solve this problem, we can follow the below steps:
1. Parse the input to get N, M, the list of integers A, and the list of operations.
2. Create a variable `total` and set its initial value to the sum of all integers in A.
3. Iterate over the list of operations.
4. For each operation, get the B and C values.
5. Calculate the maximum number of cards we can replace based on the minimum of B and N.
6. Calculate the new total by subtracting the sum of the cards we are replacing and adding the product of the number of replaced cards and C.
7. Update the value of N by subtracting the number of replaced cards.
8. Update the value of total with the new total value.
9. Print the final value of total.

'''

# Step 1: Parse the input
N, M = map(int, input().split())
A = list(map(int, input().split()))
operations = []
for _ in range(M):
    B, C = map(int, input().split())
    operations.append((B, C))

# Step 2: Initialize the total
total = sum(A)

# Step 3: Perform the operations
for op in operations:
    B, C = op
    max_replaced_cards = min(B, N)
    replaced_sum = sum(sorted(A)[-max_replaced_cards:])
    new_total = total - replaced_sum + (max_replaced_cards * C)
    N -= max_replaced_cards
    total = new_total

# Step 4: Print the result
print(total)