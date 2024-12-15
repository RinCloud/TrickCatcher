'''
# Algorithm:
1. Create an empty adjacency list to represent the graph.
2. For each piece of information (L_i, R_i, D_i), add an edge from L_i to R_i with weight D_i, and add an edge from R_i to L_i with weight -D_i.
3. For each person in the range (1 to N), if the person is not visited, perform Depth First Search (DFS) starting from that person.
4. In the DFS, for each neighbor of the current person, check if the neighbor is visited or not. If not, set the neighbor's coordinate as the current person's coordinate plus the weight of the edge between them. If the neighbor is visited, check if its coordinate is consistent with the weight of the edge between them. If not, return `No`.
5. If the DFS completes without returning `No`, return `Yes`.

# Complexity Analysis:
Both the time and space complexity for this approach are O(N + M), where N is the number of people and M is the number of pieces of information.
'''

from collections import defaultdict
import sys

def dfs(person, coordinates, visited, graph):
    visited[person] = True

    for neighbor, weight in graph[person]:
        if visited[neighbor]:
            if coordinates[person] + weight != coordinates[neighbor]:
                return False
        else:
            coordinates[neighbor] = coordinates[person] + weight
            if not dfs(neighbor, coordinates, visited, graph):
                return False

    return True

def check_consistency(N, M, information):
    graph = defaultdict(list)

    for L, R, D in information:
        graph[L].append((R, D))
        graph[R].append((L, -D))

    coordinates = [None] * (N + 1)
    visited = [False] * (N + 1)

    for person in range(1, N+1):
        if not visited[person]:
            if not dfs(person, coordinates, visited, graph):
                return "No"

    return "Yes"

if __name__ == "__main__":
    N, M = map(int, sys.stdin.readline().split())
    information = [tuple(map(int, sys.stdin.readline().split())) for _ in range(M)]

    result = check_consistency(N, M, information)
    print(result)