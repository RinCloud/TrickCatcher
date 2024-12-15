A, B, C = map(int, input().split())

if C % A == 0:
    if C == 0:  # If C is 0, we select only one 0 which is congruent to 0 modulo A for any value of A
        print("YES")
    else:  # For any non-zero C, we always select A
        print("YES")
else:
    # We need to find a positive integer k such that k*A % B = C
    for k in range(1, B):  # Selecting k from 1 to B-1
        if (k * A) % B == C:
            print("YES")
            break
    else:
        print("NO")