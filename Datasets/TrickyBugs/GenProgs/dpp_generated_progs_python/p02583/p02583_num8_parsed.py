import itertools

def count_triangles(N, lengths):
    count = 0
    
    for triplet in itertools.combinations(lengths, 3):
        if len(set(triplet)) == 3:
            a, b, c = sorted(triplet)
            if a + b > c:
                count += 1
    
    return count

N = int(input())
lengths = list(map(int, input().split()))

result = count_triangles(N, lengths)
print(result)