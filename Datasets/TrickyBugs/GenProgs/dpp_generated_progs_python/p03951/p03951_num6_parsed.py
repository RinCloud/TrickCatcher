import sys

def main():
    # Read input
    N = int(input().strip())
    s = input().strip()
    t = input().strip()

    # Find length of shortest string satisfying conditions
    if s == t:
        print(N)
    else:
        print(N * 2)

if __name__ == "__main__":
    main()