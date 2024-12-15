def min_repaint_tiles(S):
    count = 0
    for i in range(1, len(S)):
        if S[i] == S[i-1]:
            count += 1
    return count

# Read the input
S = input().strip()

# Call the function and print the result
result = min_repaint_tiles(S)
print(result)
