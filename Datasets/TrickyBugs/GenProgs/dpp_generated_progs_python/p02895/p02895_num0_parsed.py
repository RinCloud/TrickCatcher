from itertools import permutations

def is_tree(adj_list, pairs):
    n = len(adj_list)
    visited = [False] * n
    stack = []
    stack.append(0)
    while stack:
        node = stack.pop()
        visited[node] = True
        for neighbor in adj_list[node]:
            if not visited[neighbor]:
                stack.append(neighbor)
            else:
                if neighbor != pairs[node]:
                    return False
    return all(visited)

def count_ways(adj_matrix, n):
    pairs = list(range(n))
    total = 0
    for perm in permutations(range(n)):
        pairs = list(perm)
        adj_list = [[] for _ in range(2 * n)]
        for i in range(2 * n):
            for j in range(i + 1, 2 * n):
                if adj_matrix[i][j]:
                    adj_list[i].append(j)
                    adj_list[j].append(i)
        if is_tree(adj_list, pairs):
            total += 1
    return total

def main():
    n = int(input())
    adj_matrix = []
    for _ in range(2 * n):
        row = list(map(int, input().strip()))
        adj_matrix.append(row)
    print(count_ways(adj_matrix, n))

if __name__ == "__main__":
    main()