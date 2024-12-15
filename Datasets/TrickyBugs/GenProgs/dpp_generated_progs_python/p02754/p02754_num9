# Program:

def count_blue_balls(N, A, B):
    if A == 0:
        return 0

    cycle = A + B
    num_cycles = N // cycle
    remainder = N % cycle

    total_blue_balls = num_cycles * A

    if remainder >= A:
        total_blue_balls += A
    else:
        total_blue_balls += remainder

    return total_blue_balls


# Get input
N, A, B = map(int, input().split())

# Count the number of blue balls
blue_balls = count_blue_balls(N, A, B)

# Print the output
print(blue_balls)