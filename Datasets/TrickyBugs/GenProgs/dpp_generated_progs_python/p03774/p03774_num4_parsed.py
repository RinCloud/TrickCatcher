import sys

def main():
    # Read the input values
    N, M = map(int, input().split())
    students = []
    for _ in range(N):
        students.append(tuple(map(int, input().split())))
    checkpoints = []
    for _ in range(M):
        checkpoints.append(tuple(map(int, input().split())))
    
    # Iterate over each student
    for s in students:
        min_dist = sys.maxsize
        min_index = 0
        # Find the nearest checkpoint for current student
        for i, c in enumerate(checkpoints):
            dist = abs(s[0] - c[0]) + abs(s[1] - c[1])
            if dist < min_dist:
                min_dist = dist
                min_index = i + 1
        # Print the index of nearest checkpoint
        print(min_index)

if __name__ == "__main__":
    main()