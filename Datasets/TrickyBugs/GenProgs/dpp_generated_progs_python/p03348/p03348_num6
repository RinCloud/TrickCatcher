from collections import defaultdict, deque

# Function to calculate the depth of each node in the tree
def calculate_depth(node, parent, depth, graph):
    depth[node] = depth[parent] + 1
    for neighbor in graph[node]:
        if neighbor != parent:
            calculate_depth(neighbor, node, depth, graph)

# Function to calculate the number of leaves in the tree
def calculate_leaves(node, parent, graph, num_leaves):
    if len(graph[node]) == 1:
        num_leaves[node] = 1
    for neighbor in graph[node]:
        if neighbor != parent:
            calculate_leaves(neighbor, node, graph, num_leaves)
            num_leaves[node] += num_leaves[neighbor]

# Function to calculate the minimum possible colorfulness
def calculate_colorfulness(node, parent, depth, graph, num_colors):
    max_depth = 0
    for neighbor in graph[node]:
        if neighbor != parent:
            max_depth = max(max_depth, depth[neighbor])
    for neighbor in graph[node]:
        if neighbor != parent:
            if depth[neighbor] == max_depth:
                num_colors[node] = max(num_colors[node], num_colors[neighbor])
            else:
                num_colors[node] = max(num_colors[node], num_colors[neighbor] + 1)
    for neighbor in graph[node]:
        if neighbor != parent:
            calculate_colorfulness(neighbor, node, depth, graph, num_colors)

# Main function
def main():
    # Read the input
    N = int(input())
    graph = defaultdict(list)
    for _ in range(N-1):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)

    # Initialize variables for depth, number of leaves, and number of colors
    depth = [0] * (N+1)
    num_leaves = [0] * (N+1)
    num_colors = [0] * (N+1)

    # Calculate the depth of each node
    calculate_depth(1, 0, depth, graph)

    # Calculate the number of leaves in the tree
    calculate_leaves(1, 0, graph, num_leaves)

    # Calculate the minimum possible colorfulness
    calculate_colorfulness(1, 0, depth, graph, num_colors)

    # Find the minimum number of leaves in a tree that achieves the minimum colorfulness
    min_num_leaves = float('inf')
    for node in range(1, N+1):
        min_num_leaves = min(min_num_leaves, num_leaves[node])

    # Print the minimum possible colorfulness and minimum number of leaves
    print(num_colors[1], min_num_leaves)

if __name__ == '__main__':
    main()