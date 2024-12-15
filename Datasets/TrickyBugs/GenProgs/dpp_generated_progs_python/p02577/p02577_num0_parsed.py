import sys

def is_multiple_of_9(n):
    return sum(int(digit) for digit in str(n)) % 9 == 0

def main():
    n = int(sys.stdin.readline().strip())

    if is_multiple_of_9(n):
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    main()