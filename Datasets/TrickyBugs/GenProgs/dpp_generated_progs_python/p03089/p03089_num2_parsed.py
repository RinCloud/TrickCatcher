from typing import List

def is_possible_sequence(N: int, b: List[int]) -> List[int]:
    a = []
    operations = []
    for i in range(N):
        inserted = False
        for j in range(i, 0, -1):
            if b[i] == len(a) + 1:
                a.insert(j, b[i])
                operations.append(j)
                inserted = True
                break
        if not inserted:
            return [-1]
    return operations

N = int(input())
b = list(map(int, input().split()))

operations = is_possible_sequence(N, b)

if operations == [-1]:
    print(-1)
else:
    for op in operations:
        print(op)