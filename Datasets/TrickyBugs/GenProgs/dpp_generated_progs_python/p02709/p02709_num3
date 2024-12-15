# Program

def calculate_happiness_points(N, a):
    a.sort(reverse=True)
    total_happiness_points = 0

    for i in range(len(a)):
        total_happiness_points += a[i] * abs(i - (len(a) - 1))

    return total_happiness_points


# Read input from standard input
N = int(input())
a = list(map(int, input().split()))

# Calculate and print maximum total happiness points
print(calculate_happiness_points(N, a))