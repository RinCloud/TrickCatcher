import sys

def food_taste(X, A, B):
    if B <= A:
        print("delicious")
    elif B - A <= X:
        print("safe")
    else:
        print("dangerous")

# Read inputs from stdin
inputs = sys.stdin.readline().rstrip()
X, A, B = map(int, inputs.split())

# Call the function with the given inputs
food_taste(X, A, B)