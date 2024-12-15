# Here is a Python program that achieves the given intention:

# Read the inputs
A, B, C, D = map(int, input().split())

# Calculate the number of turns it takes for the monsters to defeat each other
takahashi_turns = (C + B - 1) // B
aoki_turns = (A + D - 1) // D

# Check the result based on the number of turns
if takahashi_turns >= aoki_turns:
    print("Yes")
else:
    print("No")