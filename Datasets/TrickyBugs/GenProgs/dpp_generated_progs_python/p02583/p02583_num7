import itertools

def count_triangles(N, L):
    count = 0
    for combination in itertools.combinations(L, 3):
        a, b, c = sorted(combination)
        if a + b > c and a != b and a != c and b != c:
            count += 1
    return count

N = int(input())
L = list(map(int, input().split()))

print(count_triangles(N, L))