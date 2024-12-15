from collections import deque

def calculate_height(node, parent, height, adj_list):
    for child in adj_list[node]:
        if child != parent:
            height[child] = height[node] + 1
            calculate_height(child, node, height, adj_list)

def calculate_diameter(node, parent, diameter, height, adj_list):
    max_height = height[node]
    second_height = -1

    for child in adj_list[node]:
        if child != parent:
            calculate_diameter(child, node, diameter, height, adj_list)

            if height[child] >= max_height:
                second_height = max_height
                max_height = height[child]
            elif height[child] > second_height:
                second_height = height[child]

    if second_height != -1:
        diameter[node] = max(diameter[parent], max_height + second_height + 2)

def main():
    n = int(input())
    adj_list = [[] for _ in range(n+1)]

    for _ in range(n-1):
        a, b = map(int, input().split())
        adj_list[a].append(b)
        adj_list[b].append(a)

    height = [0] * (n+1)
    calculate_height(1, 0, height, adj_list)

    diameter = [0] * (n+1)
    calculate_diameter(1, 0, diameter, height, adj_list)

    min_a = float('inf')
    min_b = float('inf')

    for a in range(1, n+1):
        b = diameter[a] // 2
        if min_a > b or (min_a == b and min_b > diameter[a]):
            min_a = b
            min_b = diameter[a]

    print(min_a, min_b)

if __name__ == "__main__":
    main()