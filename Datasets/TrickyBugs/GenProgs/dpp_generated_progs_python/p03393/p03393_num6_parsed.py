def next_diverse_word(S):
    if S == 'zyxwvutsrqponmlkjihgfedcba':
        return -1
    else:
        n = len(S)
        digits = list(S)
        for i in range(n - 1, -1, -1):
            if digits[i] != 'z':
                digits[i] = chr(ord(digits[i]) + 1)
                return ''.join(digits)
            else:
                digits[i] = 'a'
        return -1

S = input()
print(next_diverse_word(S))