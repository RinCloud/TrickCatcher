def is_possible(A, B, C):
    # Check if A divides B without remainder
    if B % A == 0:
        # Check if C is congruent to 0 modulo A
        if C % A == 0:
            return True
        else:
            return False
    else:
        # Check if C is congruent to 0 modulo GCD(A, B)
        while B != 0:
            A, B = B, A % B
        if C % A == 0:
            return True
        else:
            return False


A, B, C = map(int, input().split())

if is_possible(A, B, C):
    print("YES")
else:
    print("NO")
