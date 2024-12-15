N, M = map(int, input().split())

# If both N and M are 0, there are no balls and hence no ways to choose
# two balls with even sum.
if N == 0 and M == 0:
    answer = 0
else:
    # If N is 0, we can choose any two balls with odd numbers, the sum
    # of which is always even. Hence, there are M choose 2 ways.
    if N == 0:
        answer = M * (M - 1) // 2
    else:
        # If M is 0, we can choose any two balls with even numbers, the sum
        # of which is always even. Hence, there are N choose 2 ways.
        if M == 0:
            answer = N * (N - 1) // 2
        else:
            # If both N and M are non-zero, we can choose any two balls with
            # even numbers (N choose 2) or any two balls with odd numbers
            # (M choose 2), the sum of which is always even. Hence, the answer
            # is N choose 2 + M choose 2.
            answer = N * (N - 1) // 2 + M * (M - 1) // 2

print(answer)