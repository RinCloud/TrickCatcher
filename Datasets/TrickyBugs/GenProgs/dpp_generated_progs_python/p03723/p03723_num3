def exchange_cookies(A, B, C):
    count = 0
    while A % 2 == 0 and B % 2 == 0 and C % 2 == 0:
        half_A = A // 2
        half_B = B // 2
        half_C = C // 2
        A = half_B + half_C
        B = half_A + half_C
        C = half_A + half_B
        count += 1
        if A == B == C:
            return -1
    return count

input_values = input().split()
A = int(input_values[0])
B = int(input_values[1])
C = int(input_values[2])

print(exchange_cookies(A, B, C))