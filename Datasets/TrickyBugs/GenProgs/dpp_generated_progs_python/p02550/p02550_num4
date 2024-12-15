import sys

def sum_sequence(N, X, M):
    A = [X]
    sum = X
    for i in range(N-1):
        next_term = (A[i]**2) % M
        A.append(next_term)
        sum += next_term

    return sum

def main():
    # Read input from STDIN
    input_line = sys.stdin.readline().strip()
    N, X, M = map(int, input_line.split())

    # Calculate and print the sum of the sequence
    print(sum_sequence(N, X, M))

if __name__ == '__main__':
    main()