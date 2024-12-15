'''
#1. First, we will read the input values.
N = int(input())
adjacent_cells = []
for _ in range(N-1):
    a, b = map(int, input().split())
    adjacent_cells.append((a, b))

#2. Create an empty set to store the visited cells and a queue to perform BFS.
visited = set()
queue = []

#3. Append the first cell (cell 1) to the queue and mark it as visited.
queue.append(1)
visited.add(1)

#4. Perform BFS starting from cell 1 and alternate between Fennec and Snuke.
while queue:
    current_cell = queue.pop(0)

    #5. If the current_cell is adjacent to a black cell and is uncolored, paint it black and add it to the visited set.
    if current_cell == N:
        print("Fennec")
        break
    for cell in adjacent_cells:
        if cell[0] == current_cell and cell[1] not in visited:
            queue.append(cell[1])
            visited.add(cell[1])

    #6. If the current_cell is adjacent to a white cell and is uncolored, paint it white and add it to the visited set.
    if current_cell == N:
        print("Snuke")
        break
    for cell in adjacent_cells:
        if cell[1] == current_cell and cell[0] not in visited:
            queue.append(cell[0])
            visited.add(cell[0])
'''

# Full program