# Program:

def min_operations(N, stones):
    count = 0
    for i in range(N-1):
        # Check if current stone is white and next stone is red
        if stones[i] == 'W' and stones[i+1] == 'R':
            count += 1
    return count

N = int(input())
stones = input()

result = min_operations(N, stones)
print(result)