import sys

def main():
    # Read the inputs
    k, x = map(int, sys.stdin.readline().split())

    # Check if the sum of coins is greater than or equal to X
    if k * 500 >= x:
        print("Yes")
    else:
        print("No")

if __name__ == '__main__':
    main()