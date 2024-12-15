def min_operations(A, B):
    if len(A) != len(B):
        return -1

    n = len(A)
    num_operations = 0

    for i in range(n):
        if A == B:
            return num_operations

        if B[i] == '1':
            A = A[-1] + A[:-1]  # shift A to the right

            if A[i] == '0':
                A = A[:i] + '1' + A[i+1:]  # flip A[i]

            num_operations += 1

    return -1


A = input()
B = input()

result = min_operations(A, B)
print(result)