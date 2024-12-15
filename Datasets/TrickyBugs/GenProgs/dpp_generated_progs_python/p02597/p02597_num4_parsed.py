'''
N = int(input())
stones = input()

def count_disasters(stones):
    num_disasters = 0
    num_whites = 0
    for stone in stones:
        if stone == 'W':
            num_whites += 1
        elif stone == 'R':
            if num_whites > 0:
                num_disasters += 1
            num_whites = 0
    return num_disasters

def minimum_operations(N, stones):
    num_disasters = count_disasters(stones)
    num_swaps = min(num_disasters, N - num_disasters)
    return num_swaps + (N - num_disasters - num_swaps) // 2

print(minimum_operations(N, stones))
'''