import sys

def check_popularity(N, M, A):
    total_votes = sum(A)
    threshold = total_votes / (4 * M)
    popular_items = 0
    
    for votes in A:
        if votes >= threshold:
            popular_items += 1
    
    if popular_items >= M:
        return "Yes"
    else:
        return "No"

def main():
    # Read input from standard input
    input_lines = sys.stdin.readlines()
    N, M = map(int, input_lines[0].split())
    A = list(map(int, input_lines[1].split()))

    # Call the function and print the result
    result = check_popularity(N, M, A)
    print(result)

if __name__ == "__main__":
    main()