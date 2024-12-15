# Reading input from standard input
n = int(input())
a = list(map(int, input().split()))

# Reconstructing the order of students' entry
order = [0] * n
for i in range(n):
    order[a[i] - 1] = i + 1

# Printing the order of students' entry
print(' '.join(map(str, order)))