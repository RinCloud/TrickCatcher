import sys

def find_nearest_checkpoint(coord, checkpoints):
    min_distance = sys.maxsize
    nearest_point = None
    for i, point in enumerate(checkpoints):
        distance = abs(coord[0] - point[0]) + abs(coord[1] - point[1])
        if distance < min_distance:
            min_distance = distance
            nearest_point = i + 1
    return nearest_point

def main():
    n, m = map(int, input().split())
    students = []
    checkpoints = []
    for _ in range(n):
        a, b = map(int, input().split())
        students.append((a, b))
    for _ in range(m):
        c, d = map(int, input().split())
        checkpoints.append((c, d))
    for student in students:
        nearest_checkpoint = find_nearest_checkpoint(student, checkpoints)
        print(nearest_checkpoint)

if __name__ == "__main__":
    main()