def check_immigrant_entry(N, A):
    for num in A:
        if num % 2 == 0:
            if num % 3 != 0 and num % 5 != 0:
                return "DENIED"
    return "APPROVED"


N = int(input())
A = list(map(int, input().split()))

result = check_immigrant_entry(N, A)
print(result)