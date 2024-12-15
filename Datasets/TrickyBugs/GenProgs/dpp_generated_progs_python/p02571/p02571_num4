def num_chars_to_change(S, T):
    min_changes = float('inf')
    for i in range(len(S) - len(T) + 1):
        changes = 0
        for j in range(len(T)):
            if S[i+j] != T[j]:
                changes += 1
        min_changes = min(min_changes, changes)
    return min_changes

S = input()
T = input()

print(num_chars_to_change(S, T))