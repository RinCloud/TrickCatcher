"""
This problem can be solved using a stack data structure. We iterate over the elements of X and perform the following operations:

- If the current element X[i] is not in the stack s, we add it to the stack.
- If the current element X[i] is already in the stack s, we remove elements from the top of the stack until the top element is different from X[i] (i.e., we remove all occurrences of X[i] in the stack).

Finally, we print the elements of the stack s in order, from the bottom to the top.

Here is the implementation:
"""

# Read the input
N, K = map(int, input().split())
A = list(map(int, input().split()))

# Create an empty stack
s = []

# Iterate over the elements of X
for i in range(N*K):
    # Check if X[i] is in the stack
    if X[i] in s:
        # Remove elements from the top of the stack until the top element is different from X[i]
        while s[-1] == X[i]:
            s.pop()
    else:
        # Add X[i] to the stack
        s.append(X[i])

# Print the elements of the stack s in order, from the bottom to the top
print(*s)