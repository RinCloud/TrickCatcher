def minimum_operations(N, stones):
    count = 0
    i = 0
    while i < N-1:
        if stones[i] == 'W' and stones[i+1] == 'R':
            count += 1
            stones[i], stones[i+1] = stones[i+1], stones[i]
            i = max(i-2, -1)
        else:
            i += 1

    return count

N = int(input())
stones = input()

print(minimum_operations(N, stones))