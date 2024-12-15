import sys

def main():
    # Read N and X from input
    N, X = map(int, sys.stdin.readline().strip().split())

    # Initialize the maximum number of study hours required to infinity
    study_hours = float('inf')

    # Iterate through each exam
    for _ in range(N):
        # Read b_i, l_i, u_i from input
        b, l, u = map(int, sys.stdin.readline().strip().split())

        # Calculate the maximum score difference allowed for Takahashi to win
        max_diff = (u - l) * X

        # Calculate the number of study hours required to achieve this score difference
        required_hours = max(0, b - max_diff)

        # Update the minimum number of study hours required
        study_hours = min(study_hours, required_hours)

    # Print the minimum number of study hours required for Takahashi to win
    print(study_hours)

if __name__ == "__main__":
    main()