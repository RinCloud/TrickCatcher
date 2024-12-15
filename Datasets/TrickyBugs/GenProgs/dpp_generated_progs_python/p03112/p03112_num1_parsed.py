A, B, Q = map(int, input().split())
shrines = []
temples = []
for _ in range(A):
    shrines.append(int(input()))
for _ in range(B):
    temples.append(int(input()))
queries = []
for _ in range(Q):
    queries.append(int(input()))

def binary_search(arr, target):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] <= target:
            low = mid + 1
        else:
            high = mid - 1
    return low

def calculate_min_distance(x):
    min_distance = float("inf")
    shrine_left = binary_search(shrines, x)
    temple_left = binary_search(temples, x)
    for i in range(2):
        if shrine_left > 0 and temple_left > 0:
            distance = abs(shrines[shrine_left - 1] - temples[temple_left - 1])
            min_distance = min(min_distance, distance)
        if shrine_left < A and temple_left < B:
            distance = abs(shrines[shrine_left] - temples[temple_left])
            min_distance = min(min_distance, distance)
        shrine_left += 1
        temple_left += 1
    return min_distance

for query in queries:
    print(calculate_min_distance(query))