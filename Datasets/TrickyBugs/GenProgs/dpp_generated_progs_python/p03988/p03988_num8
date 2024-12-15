import sys

def main():
    # Read the input
    N = int(sys.stdin.readline().strip())
    a = list(map(int, sys.stdin.readline().split()))

    # Construct the tree
    tree = [[] for _ in range(N)]
    for i in range(N-1):
        tree[i+1].append(i)
        tree[i].append(i+1)

    # Check if the tree satisfies the condition
    for i in range(N):
        d = 0
        visited = [False] * N
        visited[i] = True
        queue = [(i, d)]
        while queue:
            u, d = queue.pop(0)
            for v in tree[u]:
                if not visited[v]:
                    visited[v] = True
                    queue.append((v, d+1))
        if d != a[i]:
            print("Impossible")
            return

    print("Possible")

if __name__ == "__main__":
    main()