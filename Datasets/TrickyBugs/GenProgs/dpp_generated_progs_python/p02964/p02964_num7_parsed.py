# Approach:
 - We will solve this problem using a stack data structure.
 - We will initialize an empty stack.
 - For each element `x` in the sequence X:
   - If `x` is not in the stack, then we will push `x` to the stack.
   - If `x` is present in the stack, we will pop elements from the stack until `x` is not present.
 - Finally, the stack will contain the required elements of `s`.
 - We will print the elements of stack in order from top to bottom.

# Let's implement this in code: