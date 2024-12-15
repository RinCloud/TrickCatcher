# Program

def count_operations(A, B):
    if A == B:
        return 0

    n = len(A)
    shifts = []
    flips = []

    for i in range(n):
        if B[i] == '1':
            flips.append(i)

    for shift in range(n):
        A = A[1:] + A[0]
        operations = shift

        for flip in flips:
            A = A[:flip] + str(1 - int(A[flip])) + A[flip+1:]
            operations += 1

        if A == B:
            shifts.append(operations)

    if not shifts:
        return -1

    return min(shifts)


A = input()
B = input()

result = count_operations(A, B)
print(result)