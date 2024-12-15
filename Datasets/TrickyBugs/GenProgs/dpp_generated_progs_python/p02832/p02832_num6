import sys

def main():
    # Read N from input
    N = int(input())
    # Read a_i values from input
    a = list(map(int, input().split()))

    # Create a list to store the indexes of the bricks that need to be broken
    bricks_to_break = []

    # Iterate over the bricks and check if the value on the brick is equal to its index + 1
    for i in range(N):
        if a[i] != i + 1:
            # If the value on the brick is not equal to its index + 1, add the index to the list of bricks to break
            bricks_to_break.append(i)

    # Check if it is possible to satisfy Snuke's desire
    if len(bricks_to_break) == 0:
        # If no bricks need to be broken, Snuke's desire is already satisfied
        print(0)
    elif len(bricks_to_break) == 1:
        # If only one brick needs to be broken, Snuke's desire is satisfied by breaking that brick
        print(1)
    else:
        # Otherwise, it is not possible to satisfy Snuke's desire
        print(-1)

if __name__ == "__main__":
    main()