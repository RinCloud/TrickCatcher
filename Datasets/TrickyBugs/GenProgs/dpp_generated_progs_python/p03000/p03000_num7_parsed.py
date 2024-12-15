import sys

def count_bounces(N, X, L):
    count = 0
    position = 0

    for i in range(N):
        position += L[i]
        if position <= X:
            count += 1
        else:
            break

    return count

def main():
    # Reading input
    N, X = map(int, sys.stdin.readline().split())
    L = list(map(int, sys.stdin.readline().split()))

    # Calculating the number of bounces
    num_bounces = count_bounces(N, X, L)

    # Printing the result
    print(num_bounces)

if __name__ == "__main__":
    main()