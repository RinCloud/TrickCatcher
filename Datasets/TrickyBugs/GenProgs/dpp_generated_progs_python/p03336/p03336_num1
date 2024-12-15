import sys

def main():
    # Read input
    n, m, k = map(int, input().split())
    s = input().strip()
    t = input().strip()

    # Convert input from binary string to integer
    x = int(s, 2)
    y = int(t, 2)

    # Perform bitwise AND and addition K times
    for i in range(k):
        z = x & y
        x += z
        y += z

    # Convert result from integer to binary string
    result_x = bin(x)[2:].zfill(n)
    result_y = bin(y)[2:].zfill(m)

    # Print result
    print(result_x)
    print(result_y)


if __name__ == "__main__":
    main()