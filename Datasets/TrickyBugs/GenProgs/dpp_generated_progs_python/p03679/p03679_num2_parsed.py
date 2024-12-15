import sys

def food_taste(X, A, B):
    if B <= A:
        print("delicious")
    elif B - A <= X:
        print("safe")
    else:
        print("dangerous")

if __name__ == "__main__":
    X, A, B = map(int, sys.stdin.readline().strip().split())
    food_taste(X, A, B)