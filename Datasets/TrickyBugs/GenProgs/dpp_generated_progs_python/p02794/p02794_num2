from collections import defaultdict

def dfs(curr, parent, adjacency_list, black_node):
    for neighbor in adjacency_list[curr]:
        if neighbor != parent:
            dfs(neighbor, curr, adjacency_list, black_node)
            # update the number of black nodes in the subtrees rooted at curr and neighbor
            black_node[curr] += black_node[neighbor]

def count_ways(adjacency_list, restrictions):
    n = len(adjacency_list)
    black_node = [0] * n

    # calculate the number of black nodes in the subtrees rooted at each node
    dfs(0, -1, adjacency_list, black_node)

    ways = 0
    for restriction in restrictions:
        u, v = restriction
        # check if the path connecting u and v contains at least one black node
        if black_node[u] > 0 or black_node[v] > 0:
            ways += 1

    return 2 ** (n - 1) - ways

def main():
    # read input
    n = int(input())
    adjacency_list = defaultdict(list)
    for _ in range(n - 1):
        a, b = map(int, input().split())
        adjacency_list[a - 1].append(b - 1)
        adjacency_list[b - 1].append(a - 1)
    m = int(input())
    restrictions = []
    for _ in range(m):
        u, v = map(int, input().split())
        restrictions.append((u - 1, v - 1))

    # count the number of ways to paint the edges that satisfy all of the restrictions
    result = count_ways(adjacency_list, restrictions)

    # print the result
    print(result)

if __name__ == "__main__":
    main()