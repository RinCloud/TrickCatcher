'''
# Approach:
* We start by sorting the given deck of cards in ascending order.
* We then iterate through the sorted deck and check if there are any adjacent cards with the same value.
* If there are, we remove the two adjacent cards and keep one card with the same value in the deck.
* After removing adjacent cards with the same value, we count the remaining cards in the deck.
* The maximum possible number of remaining cards is the count of cards in the deck.

# Plan:
1. Read the integer N from input.
2. Read the list of integers A from input.
3. Sort the list A in ascending order.
4. Initialize a variable count as 1 to store the count of remaining cards.
5. Iterate through the range from 1 to N-1 (both inclusive).
     - If A[i] == A[i-1] or A[i] == A[i+1], increment the count.
6. Print the value of count as the maximum possible number of remaining cards.
'''

N = int(input())
A = list(map(int, input().split()))
A.sort()

count = 1
for i in range(1, N - 1):
    if A[i] == A[i - 1] or A[i] == A[i + 1]:
        count += 1

print(count)