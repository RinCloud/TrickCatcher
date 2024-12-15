import sys

def main():
    # Read input
    n, x = map(int, input().split())
    a = list(map(int, input().split()))

    # Sort the children's desired sweets in ascending order
    a.sort()

    # Count the number of happy children
    happy_children = 0

    # Distribute the sweets optimally
    for i in range(n):
        # If there are enough sweets to satisfy the current child
        if x >= a[i]:
            # Increment the number of happy children
            happy_children += 1
            # Subtract the number of sweets given to the child from x
            x -= a[i]
        else:
            # If there are not enough sweets to satisfy the current child, break the loop
            break

    # Print the maximum possible number of happy children
    print(happy_children)

if __name__ == "__main__":
    main()