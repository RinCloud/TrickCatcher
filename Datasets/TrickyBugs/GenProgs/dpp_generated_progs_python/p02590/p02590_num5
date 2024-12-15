import sys

def main():
    # Read the input from standard input
    N = int(sys.stdin.readline().strip())
    A = list(map(int, sys.stdin.readline().strip().split()))

    # Calculate the sum of ((A_i * A_j) mod P)
    P = 200003
    total_sum = 0
    for i in range(N):
        for j in range(i+1, N):
            total_sum += (A[i] * A[j]) % P

    # Print the result
    print(total_sum)

if __name__ == "__main__":
    main()