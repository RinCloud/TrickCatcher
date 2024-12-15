from collections import defaultdict

def main():
    N, M = map(int, input().split())

    graph = defaultdict(list)
    for _ in range(M):
        L, R, D = map(int, input().split())
        graph[L].append((R, D))
        graph[R].append((L, -D))

    visited = [False] * (N + 1)
    coordinates = [0] * (N + 1)

    def dfs(node, coordinate):
        visited[node] = True
        coordinates[node] = coordinate

        for neighbor, distance in graph[node]:
            if visited[neighbor]:
                if coordinates[neighbor] != coordinate + distance:
                    return False
            else:
                if not dfs(neighbor, coordinate + distance):
                    return False

        return True

    for node in range(1, N + 1):
        if not visited[node]:
            if not dfs(node, 0):
                print("No")
                return

    print("Yes")


if __name__ == "__main__":
    main()