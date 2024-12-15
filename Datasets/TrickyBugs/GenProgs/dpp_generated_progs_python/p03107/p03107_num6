def max_cubes_removed(S):
    count = 0
    i = 0
    while i < len(S)-1:
        if S[i] != S[i+1]:
            count += 1
            i += 2
        else:
            i += 1
    return count

S = input()
print(max_cubes_removed(S))