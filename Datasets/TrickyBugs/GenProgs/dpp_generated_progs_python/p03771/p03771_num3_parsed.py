import sys
from collections import deque

def camel_journey(N, V, oases):

    # Step 1: Find the oasis indexes where water can be stored
    oasis_with_water = set()

    if oases[0] < 0:
        oasis_with_water.add(0)
    if oases[-1] > 0:
        oasis_with_water.add(N-1)

    for i in range(1, N-1):
        if oases[i] == 0:
            oasis_with_water.add(i)
        elif oases[i] < 0 and oases[i+1] > 0:
            oasis_with_water.add(i)

    # Step 2: BFS from each oasis with water to check if all oases can be visited
    result = []
    for oasis in range(N):
        visited = [False] * N
        queue = deque([oasis])
        while queue:
            current = queue.popleft()
            visited[current] = True

            if current in oasis_with_water:
                v = V
            else:
                v = 0

            if current < N-1 and not visited[current+1] and oases[current+1] - oases[current] <= v:
                queue.append(current+1)
            if current > 0 and not visited[current-1] and oases[current] - oases[current-1] <= v:
                queue.append(current-1)

        if all(visited):
            result.append("Possible")
        else:
            result.append("Impossible")

    return result


# Read input
N, V = map(int, input().split())
oases = list(map(int, input().split()))

# Obtain the results
results = camel_journey(N, V, oases)

# Print the results
for res in results:
    print(res)