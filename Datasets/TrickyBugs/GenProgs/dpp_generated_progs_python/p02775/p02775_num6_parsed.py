def min_banknotes_needed(N):
    banknotes = [10 ** 100] + [10 ** i for i in range(100)]
    count = 0
    i = len(banknotes) - 1

    while N > 0:
        if N >= banknotes[i]:
            count += N // banknotes[i]
            N %= banknotes[i]
        i -= 1

    return count

# Read the input
N = int(input())

# Call the function and print the result
print(min_banknotes_needed(N))
