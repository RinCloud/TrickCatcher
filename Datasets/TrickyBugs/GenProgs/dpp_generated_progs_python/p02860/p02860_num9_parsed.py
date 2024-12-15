def check_concatenation(N, S):
    if N % 2 != 0:
        return "No"
    else:
        half = N // 2
        first_half = S[:half]
        second_half = S[half:]
        if first_half == second_half:
            return "Yes"
        else:
            return "No"

N = int(input())
S = input()

result = check_concatenation(N, S)
print(result)