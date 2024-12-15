# Program to count the number of bounces where the coordinate is at most X

def count_bounces(N, X, L):
    count = 1
    coordinate = 0

    for i in range(N):
        coordinate += L[i]
        if coordinate <= X:
            count += 1

    return count

# Read input values
N, X = map(int, input().split())
L = list(map(int, input().split()))

# Call the count_bounces function and print the result
print(count_bounces(N, X, L))