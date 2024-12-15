import sys

def main():
    # Read input from stdin
    N, M = map(int, sys.stdin.readline().split())

    # Initialize variables
    correct_answers = 0
    penalties = 0
    verdicts = {}

    # Iterate over each submission
    for _ in range(M):
        p, S = sys.stdin.readline().split()
        p = int(p)

        # Check if problem p has already been solved
        if p in verdicts:
            # Ignore submissions after AC verdict
            if verdicts[p] == "AC":
                continue

            # If current verdict is AC, update correct_answers and penalties
            if S == "AC":
                correct_answers += 1
                penalties += verdicts[p]

        # Update verdict for problem p
        verdicts[p] = S

        # If current verdict is AC, update correct_answers and penalties
        if S == "AC":
            correct_answers += 1
            penalties += 1

    # Print the result
    print(correct_answers, penalties)

if __name__ == "__main__":
    main()